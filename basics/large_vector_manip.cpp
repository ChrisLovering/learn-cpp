#include <iostream>
#include <random>
#include <valarray>
#include <vector>
#include <chrono>
#include <sstream>

auto randomNumberBetween = [](int low, int high)
{
    auto randomFunc = [distribution_ = std::uniform_int_distribution<int>(low, high), 
                       random_engine_ = std::mt19937{ std::random_device{}() }]() mutable
    {
        return distribution_(random_engine_);
    };
    return randomFunc;
};

void insert_random(std::vector<int>& arr, std::vector<int>& queries){
    int min = -2000;
    int max = 2000;
    int count = 5e4;
    
    std::generate_n(std::back_inserter(arr), count, randomNumberBetween(min, max));
    std::generate_n(std::back_inserter(queries), count, randomNumberBetween(min, max));
}

void insert_user_input(std::vector<int> &arr, std::vector<int> &queries){
    std::cout << "Enter how many numbers are in the array: ";
    int n;
    std::cin >> n;
    arr.resize(n);

    std::cout << "Enter the numbers in the array: ";
    for ( int i=0; i<n; ++i ){
        std::cin >> arr[i];
    }

    std::cout << "Enter how many queries there will be: ";
    int q;
    std::cin >> q;
    queries.resize(q);

    std::cout << "Enter the queries: ";
    for ( int i=0; i<q; ++i ){
        std::cin >> queries[i];
    }
}

int main()
{
    std::vector<int> arr;
    std::vector<int> queries;

    // Fill with user input
    //insert_user_input(arr, queries);

    // Fill with random numbers
    insert_random(arr, queries);

    std::valarray<int> arr_valarray(arr.data(), arr.size());
    

    auto start = std::chrono::high_resolution_clock::now();
    for(int i : queries){
        arr_valarray += i;
        std::cout << std::abs(arr_valarray).sum() << std::endl;
    }
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(stop - start);

    std::cout << "This took " << duration.count() << " seconds." << std::endl;

}
#include <iostream>
#include <vector>

int main() {

    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
    
    int sum_evens = 0;
    int product_odd = 1;

    for(int i=0; i<numbers.size(); ++i){
        if(numbers[i]%2 == 0)
            sum_evens += numbers[i];
        else
            product_odd *= numbers[i];
    }

    std::cout << "Sum of even numbers is " << sum_evens << std::endl;
    std::cout << "Product of odd numbers is " << product_odd << std::endl;

}
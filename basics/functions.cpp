#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

void introduction(std::string first_name, std::string last_name){
    std::cout << last_name << ", " << first_name << " " << last_name << std::endl;
}

double average(double num1, double num2){
    return (num1+num2)/2;
}

int tenth_power(int num){
    return pow(num, 10);
}

std::vector<int> first_three_multiples(int num){
    return {num, num*2, num*3};
}

std::string needs_water(int days, bool is_succulent){
    if(is_succulent){
        if(days > 12)
            return "Go ahead and give the plant a little water.";
        else
            return "Don't water the plant!";
        
    } else{
        if(days > 3)
            return "Time to water the plant.";
        else
            return "Don't water the plant!";
        
    }
}

bool is_palindrome(std::string text){
    std::string copy(text);
    std::reverse(copy.begin(), copy.end());

    return text == copy;
}

int main() {
  
    //introduction("Beyonce", "Knowles");

    //std::cout << average(42.0, 24.0) << std::endl;
    //std::cout << average(1.0, 2.0) << std::endl;
    
    //std::cout << tenth_power(0) << std::endl;
    //std::cout << tenth_power(1) << std::endl;
    //std::cout << tenth_power(2) << std::endl;

    /*
    for (int element : first_three_multiples(8)) {
        std::cout << element << std::endl;
    }
    */
   
    //std::cout << needs_water(10, false) << std::endl;

    //std::cout << is_palindrome("madam") << std::endl;
    //std::cout << is_palindrome("ada") << std::endl;
    //std::cout << is_palindrome("lovelace") << std::endl;
}
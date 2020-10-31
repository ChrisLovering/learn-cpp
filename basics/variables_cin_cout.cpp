#include <iostream>
#include <math.h>

int main() {
  
    double height, weight, bmi;
    
    std::cout << "Type in your height (m): ";
    std::cin >> height;
    
    std::cout << "Type in your weight (kg): ";
    std::cin >> weight;

    bmi = weight / pow(height, 2);

    std::cout << "Your BMI is " << bmi;
    return 0;
}
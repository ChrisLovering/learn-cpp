#include <iostream>

int main() {

    int year;
    std::cout << "Enter a 4 digit year: ";
    std::cin >> year;
    if(std::cin.fail()) {
        std::cout << "That's not a number!" << std::endl;
        return 0;
    }
    if (std::to_string(year).length() != 4){
        std::cout << "That's not a 4 digit number!" << std::endl;
        return 0;
    }
    }
    if (year % 4 == 0){
        if(year % 100 == 0 and !(year % 400 == 0)){
            std::cout << "Not a leap year!" << std::endl;
        }else{
            std::cout << "Leap year!" << std::endl;
        }
        
    }else{
        std::cout << "Not a leap year!" << std::endl;
    }

}
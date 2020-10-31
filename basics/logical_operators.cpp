#include <iostream>

int main() {

    int year;
    while(true){
        std::cout << "Enter a 4 digit year: ";
        std::cin >> year;
        while(std::cin.fail()) {
            std::cout << "That's not a number!" << std::endl;
            std::cin.clear();
            std::cin.ignore(256,'\n');
            std::cout << "Enter a 4 digit year: ";
            std::cin >> year;
        }
        if (std::to_string(year).length() != 4){
            std::cout << "That's not a 4 digit number!" << std::endl;
            continue;
        }
        break;
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
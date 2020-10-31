#include <iostream>

int main() {

    double earth_weight;
    std::cout << "What is your earth weight? ";
    std::cin >> earth_weight;

    int planet_number;
    std::cout << "Enter a number (1-7): ";
    std::cin >> planet_number;

    double destination_weight;
    double multiplier;
    std::string planet;
    switch (planet_number){
        case 1:
            planet = "Mercury";
            multiplier = 0.38;
            break;
        case 2:
            planet = "Venus";
            multiplier = 0.91;
            break;
        case 3:
            planet = "Mars";
            multiplier = 0.38;
            break;
        case 4:
            planet = "Jupiter";
            multiplier = 2.34;
            break;
        case 5:
            planet = "Saturn";
            multiplier = 1.06;
            break;
        case 6:
            planet = "Uranus";
            multiplier = 0.92;
            break;
        case 7:
            planet = "Neptune";
            multiplier = 1.19;
            break;
    }
    destination_weight = earth_weight * multiplier;
    std::cout << "Your weight on " << planet << " will be " << destination_weight << std::endl;

}
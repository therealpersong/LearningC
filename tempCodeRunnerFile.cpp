#include <iostream>

// Define a struct named Car
struct Car {
    std::string model;
    int year;
    std::string color;
};

// Declare the function printCar that takes a Car parameter and prints its details
void printCar(Car car);

int main() {
    // Declare two Car objects named car1 and car2
    Car car1;
    Car car2;

    // Initialize car1 with specific values
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    // Initialize car2 with specific values
    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    // Call the printCar function to print details of car1
    std::cout << &car1 << '\n';
    printCar(car1);

    return 0;
}

// Define the printCar function to print details of a Car
void printCar(Car car) {
    std::cout << "The Address is: " << &car << '\n';
    std::cout << "Model: " << car.model << '\n';  // Print the model
    std::cout << "Year: " << car.year << '\n';    // Print the year
    std::cout << "Color: " << car.color << '\n';  // Print the color
}

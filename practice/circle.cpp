#include <iostream>
using namespace std;

const double PI = 3.14159;

// Function to calculate the base area of a cylinder
double calculateBaseArea(double radius, double height = 1.0) {
    return PI * radius * radius;
}

// Function to calculate the base perimeter of a cylinder
double calculateBasePerimeter(double radius, double height = 1.0) {
    return 2 * PI * radius;
}

// Function to calculate the volume of a cylinder
double calculateVolume(double radius, double height = 1.0) {
    return calculateBaseArea(radius) * height;
}

int main() {
    double radius, height;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cout << "Base Area: " << calculateBaseArea(radius, height) << endl;
    cout << "Base Perimeter: " << calculateBasePerimeter(radius, height) << endl;
    cout << "Volume: " << calculateVolume(radius, height) << endl;

    // Calling the functions by taking one less argument
    cout << "Base Area (Default Argument): " << calculateBaseArea(radius) << endl;
    cout << "Base Perimeter (Default Argument): " << calculateBasePerimeter(radius) << endl;
    cout << "Volume (Default Argument): " << calculateVolume(radius) << endl;

    return 0;
}
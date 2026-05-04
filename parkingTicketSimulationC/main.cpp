// main.cpp
// This file will test the ParkedCar class

#include <iostream>
#include "parkedCar.h"
using namespace std;

int main() {
    // Creates a parked car object
    ParkedCar car("Toyota", "Camry", "Blue", "ABC123", 90);

    // Outputs information about the car for testing
    cout << "Parking Ticket Simulator" << endl;
    cout << "---------------------------------" << endl;

    cout << "Car Information" << endl;
    cout << "Make: " << car.getMake() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Color: " << car.getColor() << endl;
    cout << "License Number: " << car.getLicenseNumber() << endl;
    cout << "Minutes Parked: " << car.getMinutesParked() << endl;

    return 0;
}
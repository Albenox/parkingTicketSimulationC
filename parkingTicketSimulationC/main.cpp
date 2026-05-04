// main.cpp
// This file will test the ParkedCar and ParkingMeter classes

#include <iostream>
#include "parkedCar.h"
#include "parkingMeter.h"
using namespace std;

int main() {
    // Creates a parked car object
    ParkedCar car("Toyota", "Camry", "Blue", "ABC123", 90);

    // Creates a parking meter object
    ParkingMeter meter(60);

    // Outputs information about the car for testing
    cout << "Parking Ticket Simulator" << endl;
    cout << "---------------------------------" << endl;

    cout << "Car Information" << endl;
    cout << "Make: " << car.getMake() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Color: " << car.getColor() << endl;
    cout << "License Number: " << car.getLicenseNumber() << endl;
    cout << "Minutes Parked: " << car.getMinutesParked() << endl;

    cout << endl;

    // Outputs information about the parking meter for testing
    cout << "Parking Meter Information" << endl;
    cout << "Minutes Purchased: " << meter.getMinutesPurchased() << endl;

    return 0;
}
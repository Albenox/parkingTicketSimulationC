// main.cpp
// This file will test the ParkedCar, ParkingMeter, and PoliceOfficer classes

#include <iostream>
#include "parkedCar.h"
#include "parkingMeter.h"
#include "policeOfficer.h"
using namespace std;

int main() {
    // Creates a parked car object
    ParkedCar car("Toyota", "Camry", "Blue", "ABC123", 90);

    // Creates a parking meter object
    ParkingMeter meter(60);

    // Creates a police officer object
    PoliceOfficer officer("John Smith", "B452");

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

    cout << endl;

    // Outputs information about the police officer for testing
    cout << "Police Officer Information" << endl;
    cout << "Officer Name: " << officer.getOfficerName() << endl;
    cout << "Badge Number: " << officer.getBadgeNumber() << endl;

    cout << endl;

    // Checks if the car is parked illegally or legally
    cout << "Inspection Result" << endl;

    if (officer.isViolation(car, meter)) {
        cout << "The car is parked illegally." << endl;
    }
    else {
        cout << "The car is parked legally." << endl;
    }

    return 0;
}
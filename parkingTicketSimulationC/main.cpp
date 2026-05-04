// main.cpp
// This file will test the ParkedCar, ParkingMeter, PoliceOfficer, and ParkingTicket classes

#include <iostream>
#include "parkedCar.h"
#include "parkingMeter.h"
#include "policeOfficer.h"
#include "parkingTicket.h"
using namespace std;

int main() {
    // Creates a parked car object
    ParkedCar car("Toyota", "Camry", "Blue", "ABC123", 90);

    // Creates a parking meter object
    ParkingMeter meter(60);

    // Creates a police officer object
    PoliceOfficer officer("John Smith", "B452");

    // Outputs information about the program for testing
    cout << "Parking Ticket Simulator" << endl;
    cout << "---------------------------------" << endl;

    // Checks if the car is parked illegally or legally
    if (officer.isViolation(car, meter)) {
        cout << "The car is parked illegally." << endl;
        cout << endl;

        // Creates a parking ticket if the car is parked illegally
        ParkingTicket ticket(car, meter, officer);

        // Displays the parking ticket information
        ticket.displayTicket();
    }
    else {
        cout << "The car is parked legally." << endl;
    }

    return 0;
}
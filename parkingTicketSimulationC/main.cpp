// main.cpp
// This file will test the Parking Ticket Simulator with multiple scenarios

#include <iostream>
#include "parkedCar.h"
#include "parkingMeter.h"
#include "policeOfficer.h"
#include "parkingTicket.h"
using namespace std;

int main() {
    // Creates a police officer object that will inspect each parked car
    PoliceOfficer officer("John Smith", "B452");

    cout << "Parking Ticket Simulator" << endl;
    cout << "---------------------------------" << endl;
    cout << endl;

    // Scenario 1 tests a car that is parked legally
    cout << "Scenario 1: Legal Parking" << endl;
    cout << "---------------------------------" << endl;

    ParkedCar car1("Toyota", "Camry", "Blue", "ABC123", 60);
    ParkingMeter meter1(60);

    if (officer.isViolation(car1, meter1)) {
        ParkingTicket ticket1(car1, meter1, officer);
        ticket1.displayTicket();
    }
    else {
        cout << "The car is parked legally." << endl;
    }

    cout << endl;

    // Scenario 2 tests a car that is illegally parked, but less than one hour over
    cout << "Scenario 2: Illegal Parking Under One Hour Over" << endl;
    cout << "---------------------------------" << endl;

    ParkedCar car2("Honda", "Civic", "Red", "XYZ789", 90);
    ParkingMeter meter2(60);

    if (officer.isViolation(car2, meter2)) {
        ParkingTicket ticket2(car2, meter2, officer);
        ticket2.displayTicket();
    }
    else {
        cout << "The car is parked legally." << endl;
    }

    cout << endl;

    // Scenario 3 tests a car that is illegally parked by multiple hours
    cout << "Scenario 3: Illegal Parking Multiple Hours Over" << endl;
    cout << "---------------------------------" << endl;

    ParkedCar car3("Ford", "Focus", "White", "LMN456", 250);
    ParkingMeter meter3(60);

    if (officer.isViolation(car3, meter3)) {
        ParkingTicket ticket3(car3, meter3, officer);
        ticket3.displayTicket();
    }
    else {
        cout << "The car is parked legally." << endl;
    }

    cout << endl;

    // Scenario 4 tests another car that is parked legally
    cout << "Scenario 4: Another Legal Parking Test" << endl;
    cout << "---------------------------------" << endl;

    ParkedCar car4("Chevrolet", "Malibu", "Black", "JKL321", 45);
    ParkingMeter meter4(90);

    if (officer.isViolation(car4, meter4)) {
        ParkingTicket ticket4(car4, meter4, officer);
        ticket4.displayTicket();
    }
    else {
        cout << "The car is parked legally." << endl;
    }

    cout << endl;

    // Scenario 5 tests another illegal parking situation with a partial additional hour
    cout << "Scenario 5: Illegal Parking With Partial Additional Hour" << endl;
    cout << "---------------------------------" << endl;

    ParkedCar car5("Nissan", "Altima", "Gray", "QRS555", 185);
    ParkingMeter meter5(60);

    if (officer.isViolation(car5, meter5)) {
        ParkingTicket ticket5(car5, meter5, officer);
        ticket5.displayTicket();
    }
    else {
        cout << "The car is parked legally." << endl;
    }

    return 0;
}
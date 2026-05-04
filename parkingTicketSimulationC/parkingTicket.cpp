// parkingTicket.cpp
// Has the logic for the class "ParkingTicket"

#include <iostream>
#include "parkingTicket.h"
using namespace std;

// Constructor
ParkingTicket::ParkingTicket(const ParkedCar& car, const ParkingMeter& meter, const PoliceOfficer& officer) {
    make = car.getMake();
    model = car.getModel();
    color = car.getColor();
    licenseNumber = car.getLicenseNumber();

    minutesParked = car.getMinutesParked();
    minutesPurchased = meter.getMinutesPurchased();

    officerName = officer.getOfficerName();
    badgeNumber = officer.getBadgeNumber();

    calculateFine();
}

// Method that calculates the fine for the ticket
void ParkingTicket::calculateFine() {
    int minutesOver = minutesParked - minutesPurchased;

    fine = 25;

    if (minutesOver > 60) {
        int additionalMinutes = minutesOver - 60;
        int additionalHours = additionalMinutes / 60;

        if (additionalMinutes % 60 != 0) {
            additionalHours++;
        }

        fine += additionalHours * 10;
    }
}

// Method that displays the parking ticket information
void ParkingTicket::displayTicket() const {
    cout << "Parking Ticket" << endl;
    cout << "---------------------------------" << endl;

    cout << "Vehicle Information" << endl;
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "License Number: " << licenseNumber << endl;

    cout << endl;

    cout << "Parking Time Information" << endl;
    cout << "Minutes Parked: " << minutesParked << endl;
    cout << "Minutes Purchased: " << minutesPurchased << endl;

    cout << endl;

    cout << "Fine Information" << endl;
    cout << "Fine: $" << fine << endl;

    cout << endl;

    cout << "Officer Information" << endl;
    cout << "Officer Name: " << officerName << endl;
    cout << "Badge Number: " << badgeNumber << endl;
}
// parkingTicket.h
// Contains header for the class ParkingTicket, with information about parking violations

// Checks to see if defined, and will not redefine if it is already
#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>
#include "parkedCar.h"
#include "parkingMeter.h"
#include "policeOfficer.h"
using namespace std;

// The class containing all of the methods and variables of ParkingTicket
class ParkingTicket {
private:
    // Variables with important information about the parked car
    string make;
    string model;
    string color;
    string licenseNumber;

    // Variables that store the parked time and purchased time
    int minutesParked;
    int minutesPurchased;

    // Variables with important information about the officer
    string officerName;
    string badgeNumber;

public:
    // Constructor
    ParkingTicket(const ParkedCar& car, const ParkingMeter& meter, const PoliceOfficer& officer);

    // Method that displays the parking ticket information
    void displayTicket() const;
};

#endif
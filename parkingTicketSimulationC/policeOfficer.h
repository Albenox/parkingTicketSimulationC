// policeOfficer.h
// Contains header for the class PoliceOfficer, with information about the officer checking cars

// Checks to see if defined, and will not redefine if it is already
#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include <string>
#include "parkedCar.h"
#include "parkingMeter.h"
using namespace std;

// The class containing all of the methods and variables of PoliceOfficer
class PoliceOfficer {
private:
    // Variables with important information about the officer
    string officerName;
    string badgeNumber;

public:
    // Constructor
    PoliceOfficer(string name, string badge);

    // Methods to get the variable data
    string getOfficerName() const;
    string getBadgeNumber() const;

    // Method that checks if the car has been parked longer than the time purchased
    bool isViolation(const ParkedCar& car, const ParkingMeter& meter) const;
};

#endif
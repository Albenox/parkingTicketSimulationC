// parkedCar.h
// Contains header for the class ParkedCar, with information about the cars parked

// Checks to see if defined, and will not redefine if it is already
#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
using namespace std;

// The class containing all of the methods and variables of ParkedCar
class ParkedCar {
private:
    // Variables with important information about cars
    string make;
    string model;
    string color;
    string licenseNumber;
    int minutesParked;

public:
    // Constructor 
    ParkedCar(string mk, string mdl, string clr, string license, int minutes);

    // Methods to get the variable data
    string getMake() const;
    string getModel() const;
    string getColor() const;
    string getLicenseNumber() const;
    int getMinutesParked() const;
};

#endif
// parkedCar.cpp
// Has the logic for the class "ParkedCar"

#include "parkedCar.h"

// Constructor
ParkedCar::ParkedCar(string mk, string mdl, string clr, string license, int minutes) {
    make = mk;
    model = mdl;
    color = clr;
    licenseNumber = license;
    minutesParked = minutes;
}

// Methods
string ParkedCar::getMake() const {
    return make;
}

string ParkedCar::getModel() const {
    return model;
}

string ParkedCar::getColor() const {
    return color;
}

string ParkedCar::getLicenseNumber() const {
    return licenseNumber;
}

int ParkedCar::getMinutesParked() const {
    return minutesParked;
}
// parkingMeter.cpp
// Has the logic for the class "ParkingMeter"

#include "parkingMeter.h"

// Constructor
ParkingMeter::ParkingMeter(int minutes) {
    minutesPurchased = minutes;
}

// Method
int ParkingMeter::getMinutesPurchased() const {
    return minutesPurchased;
}
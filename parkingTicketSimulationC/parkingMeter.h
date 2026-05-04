// parkingMeter.h
// Contains header for the class ParkingMeter, with information about purchased parking time

#ifndef PARKINGMETER_H
#define PARKINGMETER_H

// The class containing all of the methods and variables of ParkingMeter
class ParkingMeter {
private:
    // Variable that stores how many minutes were purchased
    int minutesPurchased;

public:
    // Constructor
    ParkingMeter(int minutes);

    // Method to get the variable data
    int getMinutesPurchased() const;
};

#endif

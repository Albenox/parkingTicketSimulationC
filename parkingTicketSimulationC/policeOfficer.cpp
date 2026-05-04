// policeOfficer.cpp
// Has the logic for the class "PoliceOfficer"

#include "policeOfficer.h"

// Constructor
PoliceOfficer::PoliceOfficer(string name, string badge) {
    officerName = name;
    badgeNumber = badge;
}

// Methods
string PoliceOfficer::getOfficerName() const {
    return officerName;
}

string PoliceOfficer::getBadgeNumber() const {
    return badgeNumber;
}
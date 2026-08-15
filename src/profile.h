#ifndef PROFILE_H
#define PROFILE_H

#include <string>

struct StudentProfile {
    std::string name;
    int rollNumber;
    std::string department;
};

void displayProfile(const StudentProfile& profile);

#endif
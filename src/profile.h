#ifndef PROFILE_H
#define PROFILE_H

#include <string>

struct StudentProfile {
    std::string name;
    int rollNumber;
    std::string department;
};

void displayProfile(const StudentProfile& profile);

void updateDepartment(StudentProfile& profile, const std::string& department);

bool validateProfile(const StudentProfile& profile);

#endif
#include "profile.h"
#include <iostream>

void displayProfile(const StudentProfile& profile) {
    std::cout << "\n--- Student Profile ---" << std::endl;
    std::cout << "Name: " << profile.name << std::endl;
    std::cout << "Roll Number: " << profile.rollNumber << std::endl;
    std::cout << "Department: " << profile.department << std::endl;
}
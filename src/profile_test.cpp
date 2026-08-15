#include <iostream>
#include "profile.h"

int main() {
    StudentProfile student{
        "Student",
        101,
        "Computer Science"
    };

    if (!validateProfile(student)) {
        std::cout << "Invalid student profile." << std::endl;
        return 1;
    }

    displayProfile(student);

    updateDepartment(student, "Electronics and Communication");

    std::cout << "\nAfter department update:" << std::endl;
    displayProfile(student);

    std::cout << "\nProfile test completed successfully." << std::endl;

    return 0;
}
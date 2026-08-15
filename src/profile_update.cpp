#include "profile.h"

void updateDepartment(StudentProfile& profile, const std::string& department) {
    if (!department.empty()) {
        profile.department = department;
    }
}
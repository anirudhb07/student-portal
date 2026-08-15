#include "profile.h"

bool validateProfile(const StudentProfile& profile) {
    return !profile.name.empty()
        && profile.rollNumber > 0
        && !profile.department.empty();
}
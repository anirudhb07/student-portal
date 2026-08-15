#include "dashboard.h"
#include <iostream>

void displayDashboard(const DashboardData& data) {
    std::cout << "\n--- Student Dashboard ---" << std::endl;
    std::cout << "Courses: " << data.courses << std::endl;
    std::cout << "Assignments: " << data.assignments << std::endl;
    std::cout << "Attendance: " << data.attendance << "%" << std::endl;
}
#include <iostream>
#include "dashboard.h"

int main() {
    DashboardData data{
        6,
        3,
        87.5
    };

    displayDashboard(data);

    double completion = calculateCompletionRate(8, 10);

    std::cout << "Assignment completion: "
              << completion << "%" << std::endl;

    std::cout << "Dashboard test completed successfully."
              << std::endl;

    return 0;
}
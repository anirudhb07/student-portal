#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <string>

struct DashboardData {
    int courses;
    int assignments;
    double attendance;
};

void displayDashboard(const DashboardData& data);

double calculateCompletionRate(int completed, int total);

#endif
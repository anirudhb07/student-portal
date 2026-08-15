#include "settings.h"
#include <iostream>

void displaySettings(const StudentSettings& settings) {
    std::cout << "\n--- Student Settings ---" << std::endl;
    std::cout << "Notifications: "
              << (settings.notificationsEnabled ? "Enabled" : "Disabled")
              << std::endl;

    std::cout << "Dark Mode: "
              << (settings.darkMode ? "Enabled" : "Disabled")
              << std::endl;

    std::cout << "Language: " << settings.language << std::endl;
}
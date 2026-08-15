#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>

struct StudentSettings {
    bool notificationsEnabled;
    bool darkMode;
    std::string language;
};

void displaySettings(const StudentSettings& settings);

#endif
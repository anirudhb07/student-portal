#include <iostream>
#include <string>

void logPortalActivity(const std::string& activity) {
    std::cout << "Activity: " << activity << std::endl;
}

void logLoginActivity(const std::string& username) {
    std::cout << "Login activity: " << username << std::endl;
}

void logLogoutActivity(const std::string& username) {
    std::cout << "Logout activity: " << username << std::endl;
}
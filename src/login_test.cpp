#include <iostream>
#include <string>

#include "login.h"
#include "login_validation.h"

int main() {
    std::string username = "student";
    std::string password = "1234";

    if (!validateUsername(username) || !validatePassword(password)) {
        std::cout << "Invalid login details." << std::endl;
        return 1;
    }

    if (loginUser(username, password)) {
        std::cout << "Login successful." << std::endl;
    } else {
        std::cout << "Login failed." << std::endl;
    }

    return 0;
}
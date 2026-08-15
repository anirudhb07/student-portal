#include "login_validation.h"

bool validateUsername(const std::string& username) {
    return !username.empty();
}

bool validatePassword(const std::string& password) {
    return password.length() >= 4;
}
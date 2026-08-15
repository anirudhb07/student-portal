#include "login.h"

bool loginUser(const std::string& username, const std::string& password) {
    return username == "student" && password == "1234";
}
#include "settings.h"

void updateLanguage(StudentSettings& settings, const std::string& language) {
    if (!language.empty()) {
        settings.language = language;
    }
}
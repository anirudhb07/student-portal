#include <iostream>
#include "settings.h"

int main() {
    StudentSettings settings{
        true,
        false,
        "English"
    };

    displaySettings(settings);

    updateLanguage(settings, "Hindi");

    std::cout << "\nAfter language update:" << std::endl;
    displaySettings(settings);

    std::cout << "\nSettings test completed successfully."
              << std::endl;

    return 0;
}
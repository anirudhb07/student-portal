#include <iostream>
#include <string>

void printWelcomeMessage() {
    std::cout << "      Welcome to Git !       " << std::endl;
}


void greetUser() {
    std::cout << "Hello, Developer!" << std::endl;
}

int addNumbers(int a, int b) {
    return a + b;
}

void displayStudentInfo() {
    std::string studentName = "Student";
    int rollNumber = 101;

    std::cout << "\n--- Student Information ---" << std::endl;
    std::cout << "Name: " << studentName << std::endl;
    std::cout << "Roll Number: " << rollNumber << std::endl;
}

int main() {
    printWelcomeMessage();
    greetUser();
    displayStudentInfo();

    int num1 = 5;
    int num2 = 10;
    int result = addNumbers(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;
    std::cout << "Program finished successfully." << std::endl;

    return 0;
}
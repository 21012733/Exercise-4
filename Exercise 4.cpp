#include <iostream>
#include <iomanip> // For setw()

using namespace std;

void displayMenu();
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
float division(int a, int b);
int calculateModulus(int a, int b);

int main() {
    char choice;
    int num1, num2;
    int result;

    do {
        cout << "MENU" << endl;
        cout << setw(20) << setfill('-') << "" << endl;
        displayMenu();
        cout << setw(20) << setfill('-') << "" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        cout << "Enter integer number 1: ";
        cin >> num1;
        cout << "Enter integer number 2: ";
        cin >> num2;

        if(choice == '1') {
            result = addition(num1, num2);
            cout << "Result: " << result << endl;
        } else if(choice == '2') {
            result = subtraction(num1, num2);
            cout << "Result: " << result << endl;
        } else if(choice == '3') {
            result = multiplication(num1, num2);
            cout << "Result: " << result << endl;
        } else if(choice == '4') {
            if(num2 == 0) {
                cout << "The Second integer is zero, divide by zero" << endl;
            } else {
                float divResult = division(num1, num2);
                cout << "Result: " << divResult << endl;
            }
        } else if(choice == '5') {
            result = calculateModulus(num1, num2);
            cout << "Result: " << result << endl;
        } else {
            cout << "Invalid choice!" << endl;
        }

        cout << setw(20) << setfill('-') << "" << endl;
        cout << "Press y or Y to continue: ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');

    return 0;
}

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return static_cast<float>(a) / b;
}

int calculateModulus(int a, int b) {
    if (b == 0) {
        cout << "Cannot perform modulus operation with divisor 0" << endl;
        return 0;
    }
    return a % b;
}
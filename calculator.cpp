#include <iostream>
#include <cmath> // For mathematical functions
#include <limits> // For numeric limits

using namespace std;

// Function prototypes
void showMenu();
void performOperation(int choice);

int main() {
    int choice;

    do {
        showMenu();
        cout << "Enter your choice (1-8), or 0 to exit: ";
        cin >> choice;

        if (cin.fail() || choice < 0 || choice > 8) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid choice, please try again." << endl;
        } else {
            if (choice != 0) {
                performOperation(choice);
            }
        }
    } while (choice != 0);

    cout << "Exiting the calculator. Goodbye!" << endl;
    return 0;
}

void showMenu() {
    cout << "\nAdvanced Calculator Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exponentiation (x^y)\n";
    cout << "6. Sine (sin x)\n";
    cout << "7. Cosine (cos x)\n";
    cout << "8. Tangent (tan x)\n";
    cout << "0. Exit\n";
}

void performOperation(int choice) {
    double num1, num2, result;

    switch (choice) {
        case 1: // Addition
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2: // Subtraction
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3: // Multiplication
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4: // Division
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        case 5: // Exponentiation
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 6: // Sine
            cout << "Enter angle in degrees: ";
            cin >> num1;
            result = sin(num1 * M_PI / 180); // Convert degrees to radians
            cout << "Result: " << result << endl;
            break;
        case 7: // Cosine
            cout << "Enter angle in degrees: ";
            cin >> num1;
            result = cos(num1 * M_PI / 180); // Convert degrees to radians
            cout << "Result: " << result << endl;
            break;
        case 8: // Tangent
            cout << "Enter angle in degrees: ";
            cin >> num1;
            result = tan(num1 * M_PI / 180); // Convert degrees to radians
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    float x, y;
    char op;
    char choice;

    cout << fixed << setprecision(4);

    do {
        cout << "\nEnter the value of first number: ";
        cin >> x;
        cout << "Enter the value of second number: ";
        cin >> y;

        cout << "Enter operation you want to perform (+, -, *, /): ";
        cin >> op;

        switch (op) {
            case '+':
                cout << "Result: " << x + y;
                break;
            case '-':
                cout << "Result: " << x - y;
                break;
            case '*':
                cout << "Result: " << x * y;
                break;
            case '/':
                if (y != 0)
                    cout << "Result: " << x / y;
                else
                    cout << "Error: Division by zero!";
                break;
            default:
                cout << "Invalid operation!";
        }

        cout << "\n\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Calculator closed. Goodbye!";
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number you want to check: ";
    cin >> num;

    int x, y, z;
    char choice;

    // First divisor
    cout << "Enter the first divisor: ";
    cin >> x;

    bool divByX = (num % x == 0);

    cout << "Check only with one divisor? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        if (divByX)
            cout<< num << " is divisible by " << x << endl;
        else
            cout<< num << " is NOT divisible by " << x << endl;
       
    }

   
    cout << "Enter the second divisor: ";
    cin >> y;
    bool divByY = (num % y == 0);

    if (divByX && divByY) {
        cout << num << " is divisible by both " << x << " and " << y << endl;
    } else if (divByX) {
        cout<< num << " is divisible by " << x 
             << " but not by " << y << endl;
    } else if (divByY) {
        cout << num << " is divisible by " << y 
             << " but not by " << x << endl;
    } else {
        cout << num << " is not divisible by " << x 
             << " or " << y << endl;
    }

    // Optional third divisor condition
    cout << "Do you want to check if " << num 
         << " is divisible by " << x << " or " << y << " but NOT by another number? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        cout << "Enter the third divisor: ";
        cin >> z;
        bool divByZ = (num % z == 0);

        if ((divByX || divByY) && !divByZ) {
            cout<< num << " is divisible by ";
            if (divByX && divByY)
                cout << x << " and " << y;
            else if (divByX)
                cout << x;
            else
                cout << y;
            cout << " but not by " << z << endl;
        } else if ((divByX || divByY) && divByZ) {
            cout<< num << " is divisible by ";
            if (divByX && divByY)
                cout << x << " and " << y;
            else if (divByX)
                cout << x;
            else
                cout << y;
            cout << " AND also by " << z << endl;
        } else {
            cout << num << " is not divisible by " 
                 << x << " or " << y << endl;
        }
    }

    return 0;
}

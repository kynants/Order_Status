#include <iostream>
using namespace std;

// Variables
int priceOfSpool = 100,
    spoolsOrdered,
    spoolsInStock,
    shipHand = 10;
double specialCharges;



int main() {
    cout << "Enter the number of spools ordered: ";
    cin >> spoolsOrdered;
    while (spoolsOrdered < 1) { // Input Validation for # of spools ordered.
        cout << "Spools ordered must be at least one.\n"
                "Enter the correct number of spools ordered: ";
        cin >> spoolsOrdered;
    }

    cout << "Enter the number of spools in stock: ";
    cin >> spoolsInStock;

    cout << "If there are special charges, enter how much per spool: ";
    cin >> specialCharges;

    return 0;
}
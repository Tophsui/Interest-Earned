#include <iostream>
#include <iomanip>   // For setting output formatting
#include <cmath>     // For pow() function
using namespace std;

int main() {
    // Variables to store user input
    double principal, rate;
    int timesCompounded;

    // Get user input for principal, interest rate, and times compounded
    cout << "Enter the principal: $";
    cin >> principal;

    cout << "Enter the interest rate (as a percentage, e.g., 4.25 for 4.25%): ";
    cin >> rate;

    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert interest rate from percentage to decimal form
    rate = rate / 100;

    // Calculate the amount in savings after 1 year
    double amount = principal * pow((1 + rate / timesCompounded), timesCompounded);

    // Calculate the interest earned
    double interest = amount - principal;

    // Display the report
    cout << fixed << setprecision(2);  // Set the precision to 2 decimal places
    cout << "\nInterest Rate: " << (rate * 100) << "%" << endl;
    cout << "Times Compounded: " << timesCompounded << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest: $" << interest << endl;
    cout << "Amount in Savings: $" << amount << endl;

    return 0;
}
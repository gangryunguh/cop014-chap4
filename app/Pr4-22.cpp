// This program calculates a consultant's charges at $50
// per hour, for a minimum of 5 hours. The ?: operator
// adjusts hours to 5 if less than 5 hours were worked.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const double PAY_RATE = 50.0;  // Hourly pay rate
   const int MIN_HOURS = 5;       // Minimum billable hours
   double hours,                  // Hours worked
         charges;                 // Total charges

   // Get the hours worked.
   cout << "How many hours were worked? ";
   cin >> hours;

   // Determine the hours to charge using conditional expression

   // Calculate the charges.
   charges = PAY_RATE * hours;

   // print the charges to the console with 2 fractional digits


   return 0;
}
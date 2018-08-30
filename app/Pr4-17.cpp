// This program demonstrates the logical ! operator.
#include <iostream>
using namespace std;

int main()
{
   // Constants for minimum income and years
   const double MIN_INCOME = 35000.0;
   const int MIN_YEARS = 5;

   double income;  // Annual income
   int years;      // Years at the current job

   // Get the annual income
   cout << "What is your annual income? ";
   cin >> income;
   
   // Get the number of years at the current job.
   cout << "How many years have you worked at "
        << "your current job? ";
   cin >> years;
   
   // Determine the user's loan qualifications.
   // he/she is not qualified when both income is *not* equal-or-larger than
   // 35000 and work years is *not* larger than 5


   return 0;
}
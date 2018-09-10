// This program demonstrates the && logical operator.
#include <iostream>
using namespace std;

int main()
{
   char employed,    // Currently employed, Y or N
        recentGrad;  // Recent graduate, Y or N

   // Is the user employed and a recent graduate?
   cout << "Answer the following questions\n";
   cout << "with either Y for Yes or N for No.\n";

   cout << "Are you employed? ";
   cin >> employed;
   
   cout << "Have you graduated from college "
        << "in the past two years? ";
   cin >> recentGrad;

   // Determine the user's loan qualifications.
   // He/she is only qualified when both employed and recentGrad are equal to 'Y'


   return 0;
} 
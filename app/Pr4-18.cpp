// This program displays a menu and asks the user to make a
// selection. An if/else if statement determines which item
// the user has chosen.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int choice;       // To hold a menu choice
   int months;       // To hold the number of months
   double charges;   // To hold the monthly charges

   // Constants for membership rates
   const double ADULT = 40.0,
                SENIOR = 30.0,
                CHILD = 20.0;

   // Constants for menu choices
   const int ADULT_CHOICE = 1,
	         CHILD_CHOICE = 2,
             SENIOR_CHOICE = 3,
             QUIT_CHOICE = 4;

   // Display the menu and get a choice.
   cout << "\t\tHealth Club Membership Menu\n\n";
   cout << "1. Standard Adult Membership\n";
   cout << "2. Child Membership\n";
   cout << "3. Senior Citizen Membership\n";
   cout << "4. Quit the Program\n\n";
   cout << "Enter your choice: ";
   cin >> choice;
   
   // Set the numeric ouput formatting to print
   // charges with two fractional digits

   
   // Respond to the user's menu selection based on choice which read from line 32
   // According to ADULT_CHOICE, CHILD_CHOICE, SENIOR_CHOICE, or QUIT_CHOICE,
   // charges need to be calculated by multiplying number of months and the proper
   // membership rate. Please also check whether invalid choice selection is made
   // or not


   return 0;
}
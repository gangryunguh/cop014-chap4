// The switch statement in this program uses the "fall through"
// feature to catch both uppercase and lowercase letters entered
// by the user.
#include <iostream>
using namespace std;

int main()
{
   char feedGrade;
   
   // Get the desired grade of feed.
   cout << "Our pet food is available in three grades:\n";
   cout << "A or a, B or b, and C or c. Which do you want pricing for? ";
   cin >> feedGrade;
   
   // Display the price
   // for 'A' or 'a' for 30 cents per pound
   // for 'B' or 'b' for 20 cents per pound
   // for 'C' or 'c' for 15 cents per pound


   return 0;
}
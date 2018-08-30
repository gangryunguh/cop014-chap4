// This program is carefully constructed to use the "fallthrough" 
// feature of the switch statement.
#include <iostream>
using namespace std;

int main()
{
   int modelNum;  // Model number

   // Get a model number from the user.
   cout << "Our TVs come in three models:\n";
   cout << "The 100, 200, and 300. Which do you want? ";
   cin >> modelNum;
   
   cout << "That model has the following features:\n";
   // Display the model's features with swtich statement without break
   // statement. Model 300 includes all the features of Model 200, and
   // Model 200 includes all the features of Model 100.


   return 0;
} 
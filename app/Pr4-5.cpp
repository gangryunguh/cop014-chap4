// This program averages 3 test scores. The if statement
// uses the = operator, but the == operator was intended.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int score1, score2, score3;  // To hold three test scores
   double average;              // TO hold the average score

   // Get the three test scores.
   cout << "Enter 3 test scores and I will average them: ";
   cin >> score1 >> score2 >> score3;
   
   // Calculate and display the average score.
   // Print the average score with displaying one fractional digit

   cout << "Your average is " << average << endl;

   // Our intention is to congratulate the user
   // for having a perfect score. But, this doesn't work.

   // *Find out* one implementation bug in the following if statement
   // and *correct* the bug
   if (average = 100)
      cout << "Congratulations! That's a perfect score!\n";
   return 0;
}
// This program averages three test scores
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const int HIGH_SCORE = 95;   // A high score is 95 or greater
   int score1, score2, score3;  // To hold three test scores
   double average;              // TO hold the average score


   cout << "Enter 3 test scores and I will average them: ";
   // Get the three integer test scores and assign them to score1, score2, and score3
   
   // Calculate the average score and store into average

   // display average with 1 fractional digit, i.e., 34.0

   // If the average is a high score, congratulate the user.
   if (average > HIGH_SCORE)
      cout << "Congratulations! That's a high score!\n";
   return 0;
} 
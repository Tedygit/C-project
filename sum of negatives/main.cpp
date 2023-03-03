//Sums a list of ten negative numbers.
#include <iostream>
using namespace std;

int main( )
 {
 int number, sum = 0, counts = 0;
 cout << "Enter 10 negative numbers:\n";

 while (++counts <= 10)
 {
 cin >> number;

  if (number >= 0)
  {
  cout << "ERROR: positive number"
       << " or zero was entered as the\n"
       << counts << "th number! Input ends "
       << "with the " << counts << "th number.\n"
       << counts << "th number was not added in.\n";
 break;
  }

 sum = sum + number;
 }

 cout << sum << " is the sum of the first "
      << (counts - 1) << " numbers.\n";

 return 0;
 }

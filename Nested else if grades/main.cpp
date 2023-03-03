#include<iostream>

using namespace std;

int main()

{
  int result;

  cout << "Enter result of a student: "<< endl;

  cin>> result;

  if (result > 90)
        cout<< "A"<< endl;
  else if (result > 80 && result < 90)
    cout<< "B"<< endl;
  else if (result > 70 && result < 80)
    cout<< "C"<< endl;
  else if (result > 60 && result < 70)
    cout<< "D"<< endl;
  else
    cout<< "F";


    return 0;
}

#include<iostream>

using namespace std;

int main(){

int num, dnum, rem;

cout << "Enter the number: " <<  endl;

cin >> num

while (num > 0) {

    rem = num % 10;
     if (rem < dnum)
        dnum = rem;
     num = num/10;
}

cout << endl << "The minimum digit in " << num " is " << dnum;

return 0;
}

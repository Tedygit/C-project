#include <iostream>

using namespace std;

int main()
{
    int num, dnum, rem, cnum, cnt;

    dnum = 9;

    cnt = 0;

    cout<< "Enter the number: " << endl;

    cin >> num;

    cnum = num;

    while (num > 0){

        rem = num % 10;

        if ( rem < dnum){

            dnum = rem;

            cnt = 1;}

        else if(rem == dnum)

                cnt++;


        num = num/10;
    }

    num = cnum;

    cout<< endl << "The minimum digit in "<<num<< " is "<<dnum;

    cout << endl << "Frequency of the minimum digit is " <<cnt;

    return 0;
}

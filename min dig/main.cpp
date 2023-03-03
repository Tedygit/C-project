#include <iostream>

using namespace std;

int main()
{
    int num, dnum, rem, cnum;

    dnum = 9;

    cout<< "Enter the number: " << endl;

    cin >> num;

    cnum = num;

    while (num > 0){
        rem = num % 10;
        if ( rem < dnum)
            dnum = rem;
        num = num/10;
    }

    num = cnum;
    cout<< endl << "The minimum digit in "<<num<< " is "<<dnum;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{int n, d;
cout <<"Enter two positive integers: ";
cin >>n >> d;
if(n%d) cout << n << " is not divisible by " << d << endl;
else cout << n << " is divisible by " << d;
    return 0;
}

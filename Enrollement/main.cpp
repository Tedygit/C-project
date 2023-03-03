#include <iostream>

using namespace std;

int main()

{ char ans;
cout << "Are you enrolled (y/n): ";
cin >> ans;
if (ans == 'Y' || ans == 'y') cout << "You are enrolled.\n";
else cout << "You are not enrolled.\n";

    return 0;
}

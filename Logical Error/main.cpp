#include <iostream>

using namespace std;

int main()

{int n;

cout << "Enter an integer: ";

cin >> n;

if (n == 22) cout << n << " = 22" << endl; // LOGICAL ERROR HAPPENED BECAUSE WE USE = INSTEAD OF ==!

else cout << n << " != 22" << endl;


    return 0;
}

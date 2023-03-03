#include<iostream>

using namespace std;

int main()
{
    int result;

    cout<< "Enter result of a student!"<<endl;

    cin>> result;

    switch(result/10)
    {
    case 9:
        cout << 'A';
        break;

    case 8:
        cout << 'B';
        break;

    case 7:
        cout << 'C';
        break;

    case 6:
        cout <<'D';
        break;
    default:
        cout<<'F';}


    return 0;
}

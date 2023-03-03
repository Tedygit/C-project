#include<iostream>

using namespace std;

int main()
{
    int A[5];

    int i;

    cout<<"Enter the elements of the array "<<endl;

    for ( i = 0 ; i < 5 ; i++)

    cin>> A[i];

cout<<"The elements of the array are "<<endl;

for ( i = 0 ; i < 5 ; i++)

   cout<<A[++i]<<endl;




return 0;}

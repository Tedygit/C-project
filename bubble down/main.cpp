#include<iostream>

using namespace std;

int main(){

int A[5], copy[5];


cout << "Enter the values of array A = "<<endl;

for(int i = 0; i < 5 ; i++)
    cin>>A[i];

cout <<"Display the values of the array A "<<" ";

for(int i = 0 ; i < 5 ; i++)

    cout<<A[i];

for(int i = 0 ; i < 5 ; i ++)
    copy[i]=A[i];

for(int pass = 0 ; pass < 4 ; pass++)

    for(int in = 4 ; in > pass ; in--)

        if(copy[in-1] > copy[in])
    {
        int temp = copy[in];
        copy[in] = copy[in-1];
        copy[in-1] = temp;
    }

    cout<<endl<<"The order of the sorted array is "<<endl;

    for(int i = 0 ; i < 5 ; i++)
        cout<<copy[i]<<" ";








return 0;}

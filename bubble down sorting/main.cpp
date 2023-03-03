#include<iostream>

using namespace std;

int main(){

    const int N = 6;

    int orig[N], copy[N];

    cout<<"Populate array "<<endl;

    for (int i = 0 ; i < N ; i++)

        cin>>orig[i];


    for (int i = 0 ; i < N ; i++)

        copy[i] = orig[i];

    cout<<"Display original order of array: "<<endl;

    for (int i = 0 ; i < N ; i++)

        cout<<orig[i]<<" ";

    for (int rnd = 0 ; rnd < N-1 ; rnd++)

       for (int in = N-1 ; in > rnd ; in--)

            if (copy[in] < copy[in - 1]){

                int temp = copy[in];

                copy[in] = copy[in-1];

                copy[in-1] = temp;
    }

     cout<<endl<<"Sorted array order is as follows: ";

     for (int i = 0 ; i < N ; i++)
        cout<<copy[i]<<" ";


return 0;
}

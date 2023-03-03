#include<iostream>

using namespace std;

int main()
{
    int freq[10]={0};

    int digit;
    cout<<"Enter first digit and enter negative number to terminate ";
    cin>> digit;

    while(digit >= 0){
        switch(digit){
            case 0 : freq[0]++;
                break;
            case 1 : freq[1]++;
                break;
            case 2 : freq[2]++;
                break;
            case 3 : freq[3]++;
                break;
            case 4 : freq[4]++;
                break;
            case 5 : freq[5]++;
                break;
            case 6 : freq[6]++;
                break;
            case 7 : freq[7]++;
                break;
            case 8 : freq[8]++;
                break;
            case 9 : freq[9]++;
                break;}
            cout<< endl << "Enter next digit: ";
            cin>> digit;
    }
    cout<< endl<<"Number of frequency of a single digit is "<<freq;






    return 0;
}

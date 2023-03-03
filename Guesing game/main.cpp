#include<iostream>

#include<ctime>

#include<cstdlib>

using namespace std;

int main()
{
    unsigned short guess, hidden;//game of fork

    srand(time(NULL));

    hidden = rand()%51 + 1;

    cout <<"The hidden number is: " << hidden << endl;

    cout <<"I'm hiding a number between 1 and 50. "<<endl;

    do{
       cout << "Guess a number between 1 and 50"<<endl;
       cin >> guess;
       }
        while (guess != hidden);
    cout<< "Euorika!";





    return 0;
}

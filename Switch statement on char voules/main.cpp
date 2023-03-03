#include<iostream>

using namespace std;

int main()

{
    char ch;

    cout<<"Enter a character: "<< endl;

    cin>> ch;

    switch (ch)

        {case 'a':'e':'i':'o':'u':

            cout << ch <<" is a vowel. "<<endl;

            break;

        default:
            cout << ch << " is a consonant.";}


    return 0;
}

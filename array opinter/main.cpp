#include <iostream>

#include<cstring>

using namespace std;

int main()
{
    char mys[20], *pstr;

    pstr = mys;

    strcpy(mys,"Welcome");

    cout<<mys<<endl;

    cout<<*(mys+5);

    pstr++;

    cout<<pstr[0]<<endl;

    return 0;
}

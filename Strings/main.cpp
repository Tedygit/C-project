#include <iostream>

#include<cstring>

using namespace std;

int main()
{
    int darr[5]= {11, 32, 63, 94, 85};

    char carr[] = {'h','e','l','l','o','\0'};

    char carr2[] = "hello";

    char carr3[100];

    cout<<darr;

    cout<<carr2<<endl;

    cout <<carr<< endl;

    cout<<sizeof(carr)<<endl;

    strncpy(carr3,carr2, 2);

    cout<<strlen(carr3)<<endl;

    cout<<carr3;


    return 0;
}

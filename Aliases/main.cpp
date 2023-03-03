#include<iostream>

using namespace std;

int main(){

    double A = 89.97;

    double & alias = A;//0x61fe00;

    double * addr= &alias;//points to the address value of alias

    int * cong = NULL;

    cout<<alias<<endl;
    cout<<&alias<<endl;
    cout<<addr<<endl;
    cout<<sizeof(addr)<<endl;
    cout<<sizeof(cong)<<endl;
    cout<<sizeof(&alias)<<endl;
    cout<<++(*addr);




return 0;
}

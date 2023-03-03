#include <iostream>

using namespace std;

int main()
{

    int S[4]={91, 62, 93, 94};

    int *pntr = S;

    cout<<*pntr<<endl;

    cout<<S<<"  "<<&S[0]<<endl;

    cout<<*S<<endl;

    cout<<*(S+3)<<endl;




    return 0;
}

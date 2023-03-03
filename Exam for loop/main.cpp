#include<iostream>
using namespace std;
int main(){
    int i,j;

for(i=1;i<=9;i=i+3)
   {cout<<(char)(i+64)<<(char)(i+65)<<(char)(i+66)<<endl;
    for(j=1;j<=3;j++)
    {
      cout<<j+i-1;
    }
    cout<<endl;

}


return 0;}

#include<iostream>
using namespace std;
int main(){

const int N=4;
int A[N][N];
int Rsum,Csum,Dsum=0,Disum=0;
cout<< "ENTER THE MATRIX: "<<endl;
 for(int i=0;i<N;i++)
    {
    for(int j=0;j<N;j++)
        {
        cin>>A[i][j];
        }
    }

    cout<< "THE MATRIX FORMAT IS :"<<endl;
   for(int i=0;i<N;i++)
    {
    for(int j=0;j<N;j++)
        {
        cout<<A[i][j]<<"\t";
        }

    cout<<endl<<endl;
    }
  for(int i=0;i<N;i++)
  { Rsum=0;Csum=0;
      for(int j=0;j<N;j++)
      {
        Rsum+=A[i][j];
        Csum+=A[j][i];
      }
      cout<<"the row sum is   :"<<"ROW "<<i+1<<"\t"<<Rsum<<endl;
      cout<<"the col sum is   :"<<"COL "<<i+1<<"\t"<<Csum<<endl;
  }
  for(int i=0;i<N;i++)
  {
      for(int j=0;j<N;j++)
        {
        if(i+j==N-1)
        Dsum+=A[i][j];
        if(i==j)
        Disum+=A[i][j];
       }
  }

  cout<< "diagonal from right top to left bottom is: "<<Dsum<<endl;
  cout<<"digonal sum from left top to right bottom is :  "<<Disum<<endl;

return 0;
}

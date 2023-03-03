#include<iostream>

using namespace std;

int main(){

    const int s = 4,;

    double sales[s][s];

    double rowsum[row] = {};

    double colsum[s] = {};

    double lfbotritopdigsum = 0;

    double lftopribotdigsum = 0;

    cout<<"Enter the elements of the array "<<endl;

    for(int row = 0 ; row < s ; row++)

        for(int col = 0 ; col < s ; col++)

            cin>>sales[row][col];

    for(int row = 0 ; row < s ; row++)

        for(int col = 0 ; col < s ; col++){

            rowsum[row]+= sales[row][col];

            if(row == col)
                lftopribotdigsum += sales[row][col];
        }

    cout<<"Left top to right bottom diagonal sum is "<<lftopribotdigsum<<endl;
    cout<<"Sum of rows is "<<rowsum[row];




return 0;
}

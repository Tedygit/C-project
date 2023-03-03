#include<iostream>

using namespace std;

int main(){

int n, i;

double sum;

i = 1;

sum = 0.0;

cout << "Enter a positive integer: " << endl;

cin >> n;

while( i <= n ) sum += 1.0/i++;

cout<< "The reciprocal of the sum of the first "<< n << " integers is: "<< sum;

return 0;

}

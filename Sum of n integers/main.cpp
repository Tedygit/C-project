#include<iostream>

using namespace std;

int main(){

int i, n, sum;

i = 1;

sum = 0;

cout << "Enter a positive integer: " <<endl;

cin >> n;

while ( i<= n ) sum += i++;

cout<< "Sum of the first " << n << " integers is: " << sum;






return 0;}

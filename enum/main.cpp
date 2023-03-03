#include<iostream>

using namespace std;

int main(){

    enum monthlength {JAN_LENGTH = 31, FEB_LENGTH = 28,
MAR_LENGTH = 31, APR_LENGTH = 30, MAY_LENGTH = 31,
JUN_LENGTH = 30, JUL_LENGTH = 31, AUG_LENGTH = 31,
SEP_LENGTH = 30, OCT_LENGTH = 31, NOV_LENGTH = 30,
DEC_LENGTH = 31 };

cout<<"The month length of January and February is "<<JAN_LENGTH + FEB_LENGTH;


return 0;}

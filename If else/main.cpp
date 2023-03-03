#include<iostream>

using namespace std;

int main(){

int age;

cout<< " Enter age: ";

cin>> age;

if (age > 25 && age < 30)
{
    cout << " Your age is " << age <<endl;
    cout << " You can go coffee with me."<< endl;
}
else { cout<< " You age is "<< age <<endl;
cout<< "You have to go home."<<endl;}

cout<< "Out of else statement.";

return 0;

}

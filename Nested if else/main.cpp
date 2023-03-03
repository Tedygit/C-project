#include<iostream>

using namespace std;// salary of people

int main()
{
   int age, salary;

   cout << "Enter salary of a person " << endl;
   cin >> salary;
   cout << "Enter age of a person " << endl;
   cin >> age;

   if (age > 50 )
    {
    if (salary < 70000)

        salary = salary + 10000;

        else
        {
            salary = 50000;
        }
    }
    else
    {
        salary = salary + 3000;
    }





cout<< "The new salary is: " << salary;


    return 0;
}

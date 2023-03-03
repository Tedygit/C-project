#include <iostream>

using namespace std;

int main()
{
    int sales, minimum=67, bonus, salary;
    cout<<"Enter sales."<<endl;
    cin>>sales;
    cout<<"Enter bonus"<<endl;
    cin>>bonus;
    cout<<"Enter salary"<<endl;
    cin>>salary;
   if (sales >= minimum)
 sales = sales + bonus;
cout << "salary = $" << salary;
    return 0;
}

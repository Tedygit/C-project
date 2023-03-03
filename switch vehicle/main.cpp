#include <iostream>

using namespace std;

int main()
{
   int vehicleClass;

cout << "Enter vehicle class: ";
cin >> vehicleClass;
switch (vehicleClass)
{
 case 1:
 cout << "Passenger car with toll price = 0.50";

 break;
 case 2:
 cout << "Bus with toll price = 1.50";

 break;
 case 3:
 cout << "Truck with toll price = 2.00";

 break;
 default:
 cout << "Unknown vehicle class!";
}
    return 0;
}

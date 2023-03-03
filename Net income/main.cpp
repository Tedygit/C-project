#include<iostream>


using namespace std;



int main()



{float salary, incomeTax, netIncome;



cout<<"\t"<<"INCOME TAX CALCULATOR\n\n";



cout<<"Enter Gross Salary: ";

        cin>>salary;



    if (salary<200){

        incomeTax=0;}

        else if (salary<600){

            incomeTax=((salary-200)*0.1);

            }

            else if (salary<1200){

                incomeTax= ((salary-600)*0.15+40);

                }

                else if (salary<2000){

                    incomeTax= ((salary-1200)*0.2+130);

                    }

                    else if (salary<3500){

                        incomeTax= ((salary-2000)*0.25+290);

                        }

                        else {

                            incomeTax= ((salary-3500)*0.30+665);

                            }

                            netIncome= salary-incomeTax;



                            cout<<"Income Tax: "<<incomeTax<<endl;

                            cout<<"Net Income: "<<netIncome<<endl;





return 0;

}

#include<iostream>
using namespace std;
int main()
{
    double salary,hra,da;
    cout<<"ENTER YOUR SALARY :";
    cin>>salary;
    if(salary<=5000)
    {
        hra=salary*0.08;
        da=salary*0.2;
    }
    else if(salary>5000 && salary<=10000)
    {
        hra=salary*0.12;
        da=salary*0.30;
    }
    else if(salary>10000 && salary<=15000)
    {
        hra=salary*0.15;
        da=salary*0.40;
    }
    else
    {
        hra=salary*0.20;
        da=salary*0.50;
    }
    cout<<"GROSS SALARY :"<<salary+hra+da;
}
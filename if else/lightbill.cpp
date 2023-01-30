#include<iostream>
using namespace std;
int main()
{
    int unit,Rs=0,rs=0;
    cout<<"ENTER BILL UNIT :";
    cin>>unit;
    if(unit<=100)
    {
        rs=unit*0.60+50;
        cout<<"AMOUNT :"<<rs;
    }
    else if(unit<=200)
    {
        unit=unit-100;
        rs=unit*0.80+110;
        cout<<"AMOUNT :"<<rs;
    }
    else if(unit<=300)
    {
        unit=unit-200;
        rs=unit*0.90+190;
        cout<<"AMOUNT :"<<rs;
    }
    else if(unit>300)
    {
        unit=unit-300;
        rs=unit*0.90+280;
        if(rs>300)
        {
            Rs=rs*0.15+rs;
            cout<<"AMOUNT :"<<Rs;
        }
        else
        {
            cout<<"AMOUNT :"<<rs;
        }
    }
}
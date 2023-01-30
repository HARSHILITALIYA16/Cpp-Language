#include<iostream>
using namespace std;
int main()
{
    int d=530,year,month,week,day=0;
    year=d/365;
    cout<<"year="<<year<<"\n";
    d=d-(year*365);
    month=d/30;
    cout<<"month="<<month<<"\n";
    d=d-(month*30);
    week=d/7;
    cout<<"week="<<week;
    d=d-(week*7);
    cout<<"day="<<d;
}
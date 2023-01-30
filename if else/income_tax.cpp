#include<iostream>
using namespace std;
int main()
{
    int s;
    double tax;
    cout<<"salary";
    cin>>s;
    if(s<=2500)
    {
        cout<<"0";
    }
    else if(s<=5000)
    {
        s=s-2500;
        tax=s*0.10+0;
        cout<<"TAX :"<<tax;
    }
    else if(s<=10000)
    {
        s=s-5000;
        tax=s*0.20+250;
        cout<<"TAX :"<<tax;
    }
    else
    {
        s=s-10000;
        tax=s*0.30+1250;
        cout<<"TAX :"<<tax;
    }
}
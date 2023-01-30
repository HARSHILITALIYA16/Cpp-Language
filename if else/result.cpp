#include<iostream>
using namespace std;
int main()
{
    string a;
    cout<<"STUDENT NAME :";
    cin>>a;
    int acc,stat,eco,ba,sp,total;
    double pr;
    cout<<"ACCOUNT :";
    cin>>acc;
    cout<<"STATE :";
    cin>>stat;
    cout<<"ECONOMICS :";
    cin>>eco;
    cout<<"BA  :";
    cin>>ba;
    cout<<"SP  :";
    cin>>sp;
    total=acc+stat+eco+ba+sp;
    pr=total/5;
    cout<<"\n"<<"STUDENT NAME :"<<a<<"\n";
    cout<<"TOTAL :"<<total<<"\n";
    cout<<"PERCENTAGE :"<<pr<<"\n";

    if(acc<=33 || stat<=33 || eco<=33 || ba<=33 || sp<=33)
    {
        cout<<"FAIL";
    }
    else if(pr>=80)
    {
        cout<<"GRADE :A";
    }
    else if(pr>=70)
    {
        cout<<"GRADE :B";
    }
    else if(pr>=50)
    {
        cout<<"GRADE :C";
    }
    else{
        cout<<"GRADE :D";
    }

}
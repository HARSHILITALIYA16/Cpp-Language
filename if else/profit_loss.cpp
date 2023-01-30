#include<iostream>
using namespace std;
int main()
{
    int a,c,s;
    cout<<"ENTER COST PRICE :";
    cin>>c;
    cout<<"ENTER SELL PRICE :";
    cin>>s;
    a=s-c;
    if(a<0)
    {
        cout<<"LOSS :"<<a;
    }
    else{
        cout<<"PROFIT :"<<a;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int remainder,a,b;
    cout<<"A :";
    cin>>a;
    cout<<"B :";
    cin>>b;

    double division;
    remainder =a%b;
    cout<<"REMAINDER  :"<<remainder<<"\n";
    division=a/b;
    cout<<"DIVISION  :"<<division;
}
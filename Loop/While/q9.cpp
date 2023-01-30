#include<iostream>
using namespace std;
int main()
{
    int n,a=1;
    cout<<"enter value";
    cin>>n;
    while(a<=10)
    {
        cout<<n<<"*"<<a<<"="<<n*a<<'\n';
        a++;
    }
}
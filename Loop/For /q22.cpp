#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c;
    for(b=1;b<=20;)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<a<<" ";
    }
}
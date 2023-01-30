#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c=0;
    while(c<=20)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<b<<"\t";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c,n=5;
    for(b=1;b<=n;b++)
    {
        c=a*b;
        a=c;
    }
    cout<<a;
}
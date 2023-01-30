#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c,n=5;
    while(b<=n)
    {
        c=a*b;
        a=c;
        b++;
    }
    cout<<a;

}
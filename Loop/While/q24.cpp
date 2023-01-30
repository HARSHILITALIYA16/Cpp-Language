#include<iostream>
using namespace std;
int main()
{
    int a,b=0,c,n=31;
    c=n;
    while(n>0)
    {
        a=n%10;
        b=(b*10)+a;
        n=n/10;
    }
    if(c==b)
    {
        cout<<"PELIDRON NUMBER";
    }
    else
    {
        cout<<"NOTPELIDRON NUMBER";
    }
}
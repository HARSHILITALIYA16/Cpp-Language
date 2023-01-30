#include<iostream>
using namespace std;
int main()
{
    int i=2,n=30,a=0;
    if(n==0||n==1)
    {
        a=1;
    }
    while(i<=n/2)
    {
        if(n%i==0)
        {
          a=1;
        }
        i++;
    }
    if(a==0)
    {
        cout<<"PRIME NUMBER";
    }
    else
    {
        cout<<"NOT PRIME NUMBER";
    }
}
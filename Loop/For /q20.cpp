#include<iostream>
using namespace std;
int main()
{
    int i=2,a=0,n=100;
    if(n==0||n==1)
    {
        a=1;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            a=1;
        }
    }
    if(a==0)
    {
        cout<<"PRIME NUMBER";
    }
    else{
        cout<<"NOT PRIME NUMBER";
    }
}
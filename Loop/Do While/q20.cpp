#include<iostream>
using namespace std;
int main()
{
    int a=0,i=2,n=97;
    do{
        if(n==0||n==1)
        {
            a=1;
        }
        if(n%i==0)
        {
            a=1;
        }
        i++;
    }
    while(i<=n/2);
    if(a==0)
    {
        cout<<"PRIME NUMBER";
    }
    else{
        cout<<"NOT PRIME NUMBER";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int a=1,n=10;
    while(a<=n)
    {
        if(a%2==0)
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
        a++;
    }
}
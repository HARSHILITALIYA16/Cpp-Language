#include<iostream>
using namespace std;
int main()
{
    int n=10,a=1;
    while(a<=n)
    {
        if(a%4==0)
        {
            cout<<"#";
        }
        else
        {
            cout<<"*";
        }
        a++;
    }
}
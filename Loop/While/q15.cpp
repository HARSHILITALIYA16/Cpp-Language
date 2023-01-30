#include<iostream>
using namespace std;
int main()
{
    int a=1,b;
    while(a<=10)
    {
        if(a%2==0)
        {
            b=a*a;
            cout<<b<<"\t";
        }
        else
        {
            cout<<a<<"\t";
        }
        a++;
    }
}
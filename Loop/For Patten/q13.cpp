#include<iostream>
using namespace std;
int main()
{
    int i,j,a=1,b=0;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<a<<" ";
            a+=2;
        }
        cout<<"\n";
        a=a-b;
        b+=2;

    }
}
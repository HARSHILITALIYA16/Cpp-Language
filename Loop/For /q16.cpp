#include<iostream>
using namespace std;
int main()
{
    int i,b=1,c;
    for(i=1;i<=5;i++)
    {
        c=i*b;
        b=b*2;
        cout<<c<<" ";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int a=2,b=0;
    for(a=2;a<=10;a+=2)
    {
        b=a+b;
    }
    cout<<b<<"  ";
}
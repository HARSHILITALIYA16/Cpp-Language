#include<iostream>
using namespace std;
int main()
{
    int a=1,b=0;
    for(a=1;a<=10;a+=2)
    {
        b=a+b;
    }
    cout<<b<<"  ";
}
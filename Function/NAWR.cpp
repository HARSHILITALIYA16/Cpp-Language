#include<iostream>
using namespace std;
int mul();
int main()
{
    int a=mul();
    cout<<a;
}
int mul()
{
    int a=10,b=20;
    int c=a*b;
    return c;
}
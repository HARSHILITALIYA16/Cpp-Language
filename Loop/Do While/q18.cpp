#include<iostream>
using namespace std;
int main()
{
    double a=0.5,b=0.5;
    do{
         cout<<a<<"  ";
        a=a+b;
        b++;
    }
    while(a<=20);
}
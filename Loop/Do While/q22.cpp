#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c;
    do{
        c=a+b;
        a=b;
        b=c;
        cout<<c<<"  ";
    }
    while(c<=20);
}
#include<iostream>
using namespace std;
int main()
{
    int a=1,b=0;
    do{
        b=a+b;
        a+=2;
    }
    while(a<=10);
    cout<<b;
}
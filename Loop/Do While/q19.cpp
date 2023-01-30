#include<iostream>
using namespace std;
int main()
{
    int a=4;
    do{
        int b=a*a;
        cout<<b<<"  ";
        a+=4;
    }
    while(a<20);
}
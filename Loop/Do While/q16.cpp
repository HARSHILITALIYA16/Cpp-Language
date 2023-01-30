#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c;
    do{
        c=a*b;
        a++;
        b=b*2;
        cout<<c<<" ";
    }
    while(c<=100);
}
#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c,n=5;
    do{
        c=a*b;
        b=c;
        a++;
    }
    while(a<=n);
    cout<<c;
}


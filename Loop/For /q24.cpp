#include<iostream>
using namespace std;
int main()
{
    int a=1,b=0,c,n=100;
    c=n;
    for(n;n>0;)
    {
        a=n%10;
        b=(b*10)+a;
        n=n/10;
    }
    if(c==b)
    {
        cout<<"pelidrow number";
    }
    else{
        cout<<"not pelidrow number";
    }
}
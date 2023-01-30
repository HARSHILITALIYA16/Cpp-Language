#include<iostream>
using namespace std;
int main()
{
    int n=110,a=1,b=0,c;
    c=n;
    do{
        a=n%10;
        b=(b*10)+a;
        n=n/10;
    }
    while(n>0);
    if(c==b)
    {
        cout<<"PELIDROWN NUMBER";
    }
    else{
        cout<<"NOT PELIDROWn NUMBER";
    }
}
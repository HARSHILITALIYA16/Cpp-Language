#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,c=1;
    while(a<=10)
    {
        cout<<c<<"\t";
        b=b*2;
        a++;
        c=a*b;
    }
}
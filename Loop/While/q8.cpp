#include<iostream>
using namespace std;
int main()
{
    int a=1,b=10,c=0;
    while(a<=b)
    {
        if(a%2!=0)
        {
           c=c+a;
        }
        a++;
    }
    cout<<"TOTAL :"<<c;
}
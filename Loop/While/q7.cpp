#include<iostream>
using namespace std;
int main()
{
    int a=1,n=10,c=0;
    while(a<=n)
    {
        if(a%2==0)
        {
            c=c+a;
        }
        a++;
    }
    cout<<"TOTAL :"<<c;
}
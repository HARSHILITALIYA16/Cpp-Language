#include<iostream>
using  namespace std;
int main()
{
    int a=10,b=20,c=5;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a";
        }
        else
        {
            cout<<"c";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"b";
        }
        else{
            cout<<"c";
        }
    }
}

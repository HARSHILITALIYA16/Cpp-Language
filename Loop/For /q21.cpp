#include<iostream>
using namespace std;
int main()
{
    char a='A';
    for(a='A';a<=122;)
    {
        if(a<=90)
        {
            cout<<a<<" ";
            a=a+34;
        }
        else{
            cout<<a<<" ";
            a=a-30;
        }
    }
}
#include<iostream>
using namespace std;
int main()
{
    char a=65,b;
    while(a<=122)
   {
    if(a<=90)
     {
        cout<<a<<"\t";
        a+=34;
    }
    else
    {
        cout<<a<<"\t";
        a-=30;
    }}
}
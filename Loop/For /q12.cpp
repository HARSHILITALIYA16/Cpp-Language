#include<iostream>
using namespace std;
int main()
{
    int a=1;
    for(a=1;a<=10;a++)
    {
        if(a%4==0)
        {
            cout<<"#";
        }
        else{
            cout<<"*";
        }
    }
}
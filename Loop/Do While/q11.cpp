#include<iostream>
using namespace std;
int main()
{
    int a=1;
    do{
        if(a%2==0)
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
        a++;
    }
    while(a<=10);
}
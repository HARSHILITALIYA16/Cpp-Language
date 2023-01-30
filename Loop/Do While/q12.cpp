#include<iostream>
using namespace std;
int main()
{
    int a=1;
    do{
        if(a%4==0)
        {
            cout<<"#";
        }
        else{
            cout<<"*";
        }
        a++;
    }
    while(a<=20);
}
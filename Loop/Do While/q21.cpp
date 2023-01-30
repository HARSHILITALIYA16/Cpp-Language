#include<iostream>
using namespace std;
int main()
{
    char a='A';
    do{
        if(a<=92)
        {
            cout<<a<<"  ";
            a=a+34;
        }
        else{
            cout<<a<<"  ";
            a=a-30;
        }
    }
    while(a<=122);
}
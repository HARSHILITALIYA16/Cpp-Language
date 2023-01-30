#include<iostream>
using namespace std;
int main()
{
    char a='A';
    do{
        cout<<a<<" ";
        a+=2;
    }
    while(a<='Z');
}
#include<iostream>
using namespace std;
int main()
{
    int n=100,a=0;
    do{
        n=n/10;
        a++;
    }
    while(n>0);
    cout<<a;
}
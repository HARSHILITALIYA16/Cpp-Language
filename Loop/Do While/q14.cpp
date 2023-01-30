#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1;
    do{
        b=a*a;
        cout<<b<<"\t";
        a++;
    }
    while(a<=5);
}
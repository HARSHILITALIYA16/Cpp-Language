#include<iostream>
using namespace std;
int main()
{
    int n,a=0;
    cout<<"ENTER VALUE :";
    cin>>n;
    while(n>0)
    {
        n=n/10;
        a++;
    }
    cout<<"DIGIT :"<<a;
}
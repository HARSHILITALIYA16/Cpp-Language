#include<iostream>
using namespace std;
int main()
{
    char a,b='Z';
    cout<<"ENTER CHAR :";
    cin>>a;

    while(a<=b)
    {
        cout<<a<<"\t";
        a++;
    }
}
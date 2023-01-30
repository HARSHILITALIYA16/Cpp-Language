#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"ENTER CHARCTER :";
    cin>>a;
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        cout<<"CHAR IS VOVELS";
    }
    else
    {
        cout<<"CHAR IS CONSTANT";
    }
}
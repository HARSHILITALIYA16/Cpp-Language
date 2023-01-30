#include<iostream>
using namespace std;
int main()
{
    char a,c;
    cout<<"ENTER CHARCTER :";
    cin>>a;
    if(a>=90)
    {
        c=a-32;
        cout<<"CAPITAL :"<<c;
    }
    else{
        c=a+32;
        cout<<"SMALL :"<<c;
    }
}
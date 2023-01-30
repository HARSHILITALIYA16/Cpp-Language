#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENTER VALUE :";
    cin>>a;
    if(a>0)
    {
        cout<<"POSITIVE NUMBER";
    }
    else{
        if(a==0)
        {
            cout<<"ZERO";
        }
        else{
            cout<<"NEGATIVE NUMBER";
        }
    }
}
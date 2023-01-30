#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"ENTER VALUE A :";
    cin>>a;
    cout<<"ENTER VALUE B :";
    cin>>b;
    //MAXIMUM NUMBER
    switch(a>b)
    {
        case 1:
        cout<<"A";
        break;

        case 0:
        cout<<"B";
        break;
    }
}
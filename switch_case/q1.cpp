#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENTER DAY :";
    cin>>a;
    switch(a)
    {
        case 1:
        cout<<"MONDAY";
        break;

        case 2:
        cout<<"TUESDAY";
        break;

        case 3:
        cout<<"WEDNESDAY";
        break;

        case 4:
        cout<<"THURSDAY";
        break;

        case 5:
        cout<<"FRIDAY";
        break;

        case 6:
        cout<<"SATURDAY";
        break;

        case 7:
        cout<<"SUNDAY";
        break;

        default:
        cout<<"INVALID VALUE";
        break;


    }
}
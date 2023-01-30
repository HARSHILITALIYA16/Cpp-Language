#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENTER VALUE :";
    cin>>a;
    switch(a>0)
    {
        case 1:
        cout<<"POSITIVE NUMBER";
        break;

        case 0:
        switch(a==0)
        {
            case 1:
            cout<<"ZERO";
            break;

            case 0:
            cout<<"NEGATIVE NUMBER";
            break;
        }
    }
}
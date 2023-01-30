#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENTER NUMBER :";
    cin>>a;

    switch(a%2==0)
    {
        case 1:
        cout<<"VALUE IS EVEN NUMBER";
        break;

        case 0:
        cout<<"VALUE IS ODD NUMBER";
        break;
    }
}
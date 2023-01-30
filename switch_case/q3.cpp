#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"ENTER CHARCTER :";
    cin>>a;
    
    switch(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        case 1:
        cout<<"CHAR IS VOVELS";
        break;

        case 0:
        cout<<"CHAR IS CONSTANT";
        break;
    }

}
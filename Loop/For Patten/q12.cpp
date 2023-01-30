#include<iostream>
using namespace std;
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;)
        { int d=0;
            for(int c=1;c<=a;c++)
            {
                if(a%c==0)
                {
                    d++;
                }
            }
            if(d==2)
            {
                cout<<a<<" ";
                j++;
            }
            a++;
        }
        cout<<"\n";
    }
}
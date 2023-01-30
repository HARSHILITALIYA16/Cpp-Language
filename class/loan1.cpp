#include<iostream>
using namespace std;
class Myloan
{
    int _c;
    float _b,total,m;
    public:
    int _a;
    Myloan()
    {
        cout<<"PRESS 1: HOME LOAN"<<endl;
        cout<<"PRESS 2: CAR LOAN"<<endl;
        cout<<"PRESS 3: GOLD LOAN"<<endl;
        cout<<"PRESS 4: PERSONAL LOAN"<<endl;
        cout<<"PRESS 5: EDUCATION LOAN"<<endl;

       cout<<"ENTER YOUR LOAN        :";
       cin>>_a;
       cout<<"ENTER YOUR LOAN AMOUNT :";
       cin>>_b;
       cout<<"ENTER YOUR LOAN MONTH  :";
       cin>>_c;
    }
    void homeloan()
    {
       cout<<"HOME LOAN";
       total=_b*0.10;
       m=total/_c;
       cout<<endl<<"monthly interest :"<<m<<endl;
    }
    void carloan()
    {
        cout<<"CAR LOAN";
        total=_b*0.07;
        m=total/_c;
        cout<<endl<<"monthly interest :"<<m<<endl;
    }
    void goldloan ()
    {
        cout<<"GOLD LOAN";
        total=_b*0.08;
        m=total/_c;
        cout<<endl<<"monthly interest :"<<m<<endl;
    }
    void personalloan()
    {
        cout<<"PERSONAL LOAN";
        total=_b*0.09;
        m=total/_c;
        cout<<endl<<"monthly interest :"<<m<<endl;
    }
    void educationloan()
    {
        cout<<"EDUCATION  LOAN";
        total=_b*0.05;
        m=total/_c;
        cout<<endl<<"monthly interest :"<<m;
    }
};
int main()
{
    Myloan abc;
   
    switch(abc._a)
    {
       case  1:
       abc.homeloan();
       break;

       case  2:
       abc.carloan();
       break;

       case 3:
       abc.goldloan();
       break;

       case  4:
       abc.personalloan();
       break;

       case  5:
       abc.educationloan();
       break;

       return 0;
    }
}
#include<iostream>
#include<String>
using namespace std;
class Mybalance
{
    public:
    int total=0,a;
    void bank()
    {
        cout<<"PRESS 1: STATE BANK OF INDIA"<<endl;
        cout<<"PRESS 2: BANK OF BARODA"<<endl;
        cout<<"PRESS 3: PANJAB NATIONAL BANK"<<endl;
        cout<<"PRESS 4: KOTAK MAHINDRA BANK"<<endl;
        cout<<"PRESS 5: ORIANTAL BANK"<<endl;
        cout<<"PRESS 6: AXIS BANK"<<endl;
        cout<<"PRESS 7: UNION BANK"<<endl;
        cout<<"PRESS 8: ICICI BANK"<<endl;
    }
    int deposit()
    {
        cout<<"ENTER YOUR DEPOSITE AMOUT :";
        cin>>a;
        cout<<a<<" DEPOSIT SUCESSFULLY "<<endl<<endl;
        total=total+a;
    }
    int withdrow()
    {
        cout<<"ENTER YOUR WITHDROW  AMOUNT :";
        cin>>a;
        if(a>total)
        {
            cout<<"LOW BALANCE "<<endl;
        }
        else
        {
           cout<<a<<" YOUR WITHDROW SUCESSFULLY "<<endl<<endl;
           total=total-a;
        }
    }
    int balance()
    {
        cout<<"YOUR BALANCE :";
        cout<<total<<endl;
    }
};
int main()
{
    string name;
    int a,m,b;
    Mybalance abc;
    abc.bank();
    
    cout<<"ENTER YOUR BANK :";
    cin>>b;
    cout<<"ENTER YOUR NAME :";
    cin>>name;
    cout<<"ENTER YOUR ACCOUNT NO :";
    cin>>a;
    cout<<"       *********************************************************"<<endl;
    for(int i=1;i<=i;i++)
    {
        cout<<"PRESS 1 :DEPOSIT"<<endl;
        cout<<"PRESS 2 :WITHDROW"<<endl;
        cout<<"PRESS 3 :CHECK BALANCE"<<endl;
        cout<<"PRESS 0 :EXIT"<<endl;
        cout<<"choice ==";
        cin>>m;
        switch(m)
        {
            case 1:
            abc.deposit();
            break;

            case 2:
            abc.withdrow();
            break;

            case 3:
            abc.balance();
            break;

            case 0:
            {
                switch(b)
                {
                     case 1:
                     cout<<"STATE BANK OF INDIA";
                     break;

                     case 2:
                     cout<<"BANK OF BARODA";
                     break;

                    case 3:
                    cout<<"PANJAB NATIONAL BANK";
                    break;

                    case 4:
                    cout<<"KOTAK MAHINDRA BANK ";
                    break;

                    case 5:
                    cout<<"ORIANTEL BANK";
                    break;

                    case 6:
                    cout<<"AXIS BANK";
                    break;

                    case 7:
                    cout<<"UNION BANK";
                    break;

                    case 8:
                    cout<<"ICICI BANK ";
                    break;
                }
            
             cout<<endl<<"ACCOUNT NO      :"<<a<<endl;
             cout<<"ACCOUNT HOLDER  :"<<name<<endl;
             abc.balance();
             return 0;
             break;
            }
        }
    }
}
#include<iostream>
#include<String>
using namespace std;
class Mybalance
{
    public:
    int total=1000,a,x,total1=2000;
    void name()
    {
        cout<<"PRESS 1: jay"<<endl;
        cout<<"PRESS 2: vijay"<<endl;
        cout<<"press your name : ";
        cin>>x;
    }
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
    void deposit()
    {
        cout<<"ENTER YOUR DEPOSITE AMOUT :";
        cin>>a;
        cout<<a<<" DEPOSIT SUCESSFULLY "<<endl<<endl;
        total=total+a;
    }
    void deposit1()
    {
        cout<<"VIJAY"<<endl;
        cout<<"ENTER YOUR DEPOSITE AMOUT:";
        cin>>a;
        cout<<a<<" DEPOSIT SUCESSFULLY "<<endl<<endl;
        total1=total1+a;
    }
    void withdrow()
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
    void withdrow1()
    {
        cout<<"ENTER YOUR WITHDROW  AMOUNT :";
        cin>>a;
        if(a>total1)
        {
            cout<<"LOW BALANCE "<<endl;
        }
        else
        {
           cout<<a<<" YOUR WITHDROW SUCESSFULLY "<<endl<<endl;
           total1=total1-a;
        }
    }
    void balance()
    {
        cout<<"YOUR BALANCE :";
        cout<<total<<endl;
    }
    void balance1()
    {
        cout<<"YOUR BALANCE :";
        cout<<total1<<endl;
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
    abc.name();
    cout<<"       *********************************************************"<<endl;
    if(abc.x==1)
    {
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
             cout<<"ACCOUNT HOLDER  :"<<"JAY"<<endl;
             abc.balance();
             return 0;
             break;
            }
        }
    }
    }
    else if(abc.x==2)
    {
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
            abc.deposit1();
            break;

            case 2:
            abc.withdrow1();
            break;

            case 3:
            abc.balance1();
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
             cout<<"ACCOUNT HOLDER  :"<<"vijay"<<endl;
             abc.balance1();
             return 0;
             break;
            }
        }
    }

    }
}
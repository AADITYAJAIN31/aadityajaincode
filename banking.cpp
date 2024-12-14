#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
class Banking
{
    #define RESET   "\033[0m"
    #define RED     "\033[31m"      
    #define GREEN   "\033[32m"    
    #define YELLOW  "\033[33m"      
    #define BLUE    "\033[34m"      
    #define MAGENTA "\033[35m"    
    #define CYAN    "\033[36m"      
    #define WHITE   "\033[37m"
    #define BLACK   "\033[38m"   
    float Balance;
    string name,address,Password,Pancard;
    int AccountNumber;
    private:
    char createaccount,login;
    public:
    void get()
    {
        srand(time(0));
        int AccountNumber=1234567890+(rand()%2345678969),password;
        int choice;
        string aadharcard;
        float deposit,Withdraw;
        while(true)
        {
        cout<<GREEN<<"\t WELCOME TO AXIS BANK \t\n"<<RESET;
        cout<<BLACK<<"\t 1. Create ACCOUNT \t\n"<<RESET;
        cout<<BLACK<<"\t 2. Login \t\n"<<RESET;
        cout<<BLACK<<"\t 3. Exit \t\n"<<RESET;
        cout<<"\t Choose an option \t\n";
        cin>>choice;
        if(choice==1)
        {
            cout<<MAGENTA<<"\t Create Account \t\n"<<RESET;
            cout<<CYAN<<"\t Enter account holders name \t\n"<<RESET;
            cin>>name;
            cout<<"\t Enter intial deposit \t\n";
            cin>>deposit;
            cout<<"\t Enter address \t\n";
            cin>>address;
            cout<<RED<<"\t Enter the aadhar card number \t\n"<<RESET;
            cin>>aadharcard;
            cout<<RED<<"\t Enter the Pan card number \t\n"<<RESET;
            cin>>Pancard;
            cout<<GREEN<<"\t Account created successfully \t\n"<<RESET;
            cout<<"\t Account Number: \t"<<AccountNumber<<endl;
            cout<<"\t Account Holder: \t"<<name<<endl;
            cout<<"\t Holder Address \t"<<address<<endl;
            cout<<"\t aadhar card number \t"<<aadharcard<<endl;
            cout<<"\t Pan card number \t"<<Pancard<<endl;
            this->Balance=deposit;
            if(Balance>0)
            {
            cout<<"\t Balance: Rs \t\t"<<Balance<<endl;
            }
            else
            {
            cout<<" \t Balance should be greater than zero \t\n";
            cout<<" \t Enter balance again \t\n";
            cout<<"\t Balance: Rs \t\t"<<Balance<<endl;
            }
            while(true)
        {
            cout<<WHITE<<"\t 1. Deposit \t\n"<<RESET;
            cout<<WHITE<<"\t 2. Withdraw \t\n"<<RESET;
            cout<<WHITE<<"\t 3. Check Balance \t\n"<<RESET;
            cout<<WHITE<<"\t 4. Logout \t\n"<<RESET;
            cout<<"\t Choose an option \t\n";
            cin>>choice;
            if(choice==1)
            {
                cout<<"\t Deposit \t\n";
                cout<<"\t Enter amount of deposit \t\n";
                cin>>deposit;
                cout<<GREEN<<"\t Deposit Successful \t\n"<<RESET;
                cout<<"\t Account Number: \t"<<AccountNumber<<endl;
                cout<<"\t Account Holder: \t"<<name<<endl;
                Balance=Balance+deposit;
                cout<<"\t Balance: \t\t"<<Balance<<endl;
            }
            else
            {
                if(choice==2)
                {
                    cout<<"\t Withdraw \t\n";
                    cout<<"\t enter amount to withdraw \t\n";
                    cin>>Withdraw;
                    if(Withdraw>Balance)
                    {
                        cout<<" \t Insufficient \t\n";
                    }
                    else
                    {
                    cout<<GREEN<<"\t Withdrawal successful \t\n"<<RESET;
                    cout<<"\t Account Number: \t"<<AccountNumber<<endl;
                    cout<<"\t Account Holder: \t"<<name<<endl;
                    Balance=Balance-Withdraw;
                    cout<<"\t Balance: \t\t"<<Balance<<endl;
                    }

                }
                else
                {
                    if(choice==3)
                    {
                        cout<<"\t Check Balance \t\n";
                        cout<<"\t Account Number: \t"<<AccountNumber<<endl;
                        cout<<"\t Account Holder: \t"<<name<<endl;
                        cout<<"\t Balance \t\t"<<Balance<<endl;

                    }
                    else
                    {
                        cout<<" \t Logout \t\n";
                        cout<<GREEN<<"\t Thank you for banking with axis bank \t\n"<<RESET;
                        break;
                    }
                }
            }
        }
        }
        
        else
        {
            if(choice==2)
            {
                cout<<YELLOW<<"\t login \t\n"<<RESET;
                cout<<YELLOW<<"\t Enter account number \t\n"<<RESET;
                cin>>AccountNumber;
                cout<<YELLOW<<"\t Enter Password \t\n"<<RESET;
                cin>>Password;
                cout<<GREEN<<"\t Login successful \t\n"<<RESET;
                cout<<"\t Account number: \t"<<AccountNumber<<endl;
                cout<<"\t Account Holder: \t"<<name<<endl;
                cout<<"\t Balance \t\t"<<Balance<<endl;
                while(true)
                {
                cout<<WHITE<<"\t 1. Deposit \t\n"<<RESET;
                cout<<WHITE<<"\t 2. Withdraw \t\n"<<RESET;
                cout<<WHITE<<"\t 3. Check Balance \t\n"<<RESET;
                cout<<WHITE<<"\t 4. Logout \t\n"<<RESET;
                cout<<"\t Choose an option \t\n";
                cin>>choice;
            if(choice==1)
            {
                cout<<"\t Deposit \t\n";
                cout<<"\t Enter amount of deposit \t\n";
                cin>>deposit;
                cout<<GREEN<<"\t Deposit Successful \t\n"<<RESET;
                cout<<"\t Account Number: \t"<<AccountNumber<<endl;
                cout<<"\t Account Holder: \t"<<name<<endl;
                Balance=Balance+deposit;
                cout<<"\t Balance: \t\t"<<Balance<<endl;
            }
            else
            {
                if(choice==2)
                {
                    cout<<"\t Withdraw \t\n";
                    cout<<"\t enter amount to withdraw \t\n";
                    cin>>Withdraw;
                    if(Withdraw>Balance)
                    {
                        cout<<" \t Insufficient \t\n";
                    }
                    else
                    {
                    cout<<GREEN<<"\t Withdrawal successful \t\n"<<RESET;
                    cout<<"\t Account Number: \t"<<AccountNumber<<endl;
                    cout<<"\t Account Holder: \t"<<name<<endl;
                    Balance=Balance-Withdraw;
                    cout<<"\t Balance: \t\t"<<Balance<<endl;
                    }

                }
                else
                {
                    if(choice==3)
                    {
                        cout<<"\t Check Balance \t\n";
                        cout<<"\t Account Number: \t"<<AccountNumber<<endl;
                        cout<<"\t Account Holder: \t"<<name<<endl;
                        cout<<"\t Balance \t\t"<<Balance<<endl;

                    }
                    else
                    {
                        cout<<" \t Logout \t\n";
                        cout<<"\t Thank you for banking with axis bank \t\n";
                        break;
                    }
                }
                }
            }
            }
            else
            {
                exit(0);
            }
        }
    }
    }
};
int main()
{
    Banking a;
    a.get();
    return 0;
}




















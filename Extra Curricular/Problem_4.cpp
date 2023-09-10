#include <iostream>
using namespace std;

class bank
{
    string name, type;
    long int accno, balance, depo, wd;

public:
    int check(int a)
    {
        if (a == accno)
            return 0;
        else
            return 1;
    }
    void input();
    void deposit();
    void withdraw();
    void display();
};

void bank::input()
{
    cout << "Enter The Name Of Account Holder : ";
    cin >> name;
    cout << "Enter The Account Type Of " << name << " : ";
    cin >> type;
    cout << "Enter The Account Number Of " << name << " : ";
    cin >> accno;
    cout << "Enter The Balance Of " << name << " : ";
    cin >> balance;
}

void bank::display()
{
    cout << "Account Holder : " << name << endl;
    cout << "Type Of Account : " << type << endl;
    cout << "Account Number : " << accno << endl;
    cout << "Balance Of " << accno << " : " << balance << endl;
}

void bank::deposit()
{
    cout << "Enter The Amount That You Went To Deposit : ";
    cin >> depo;
    balance = balance + depo;
    cout << "Your Total Balance Is " << balance << "." << endl;
}

void bank::withdraw()
{
    cout << "This Is Your Balance " << balance << "." << endl;
    cout << "How Many Youe Went To Withdraw : ";
    cin >> wd;
    if (wd > balance)
    {
        cout << "Not Enough Balance!!" << endl;
    }
    else
    {
        balance = balance - wd;
        cout << "Your Balance After Withdraw : " << balance << endl;
    }
}
int k;
long int num;

int main()
{
    bank b[5];
    int ch;

    do
    {
        cout << "1. For Enter The Data." << endl;
        cout << "2. For Display Data." << endl;
        cout << "3. For Deposite." << endl;
        cout << "4. For Withdraw." << endl;
        cout << "Enter Your Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (int i = 0; i < 2; i++)
            {
                b[i].input();
            }
            break;

        case 2:
            for (int i = 0; i < 2; i++)
            {
                b[i].display();
            }
            break;

        case 3:
            cout << "Enter Account Number : ";
            cin >> num;
            for (int i = 0; i < 2; i++)
            {
                k = b[i].check(num);
                if (k == 0)
                {
                    b[i].deposit();
                }
            }
            break;

        case 4:
            cout << "Enter Account Number : ";
            cin >> num;
            for (int i = 0; i < 2; i++)
            {
                k = b[i].check(num);
                if (k == 0)
                {
                    b[i].withdraw();
                }
            }
            break;

        case 5:
            exit(0);

        default:
            cout << "Enter Valid Number!!" << endl;
            break;
        }
    } while (ch != 5);
    return 0;
}
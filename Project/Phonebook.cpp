#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Phonebook
{
public:
    string fname, lname, phone_num;
    void display();
    void addContact();
    void searchContact();
} p;

class Checker : public Phonebook
{
public:
    bool check_digits(string x);
    bool check_numbers(string x);
} c;

void self_exit()
{
    cout << "Thank You for using Contact-Saver!!!" << endl;
}

void Phonebook::display()
{
    string detail;
    ifstream show("number.txt");

    // getline(show,detail);
    // cout<<detail;

    while (show.eof() == 0)
    {
        getline(show, detail);
        cout << detail << endl;
    }

    show.close();
}
// Method 3
// Helper method
void Phonebook::addContact()
{
    ofstream phone("number.txt", ios::app);
    cout << "Enter First Name : ";
    cin >> fname;
    cout << "Enter Last Name : ";
    cin >> lname;
    cout << "Enter Phone Number : ";
    cin >> phone_num;

    if (c.check_digits(phone_num) == true)
    {
        if (c.check_numbers(phone_num) == true)
        {
            if (phone.is_open())
            {
                phone << fname << " " << lname << " " << phone_num << endl;
                cout << "Contact saved successfully!!!" << endl;
            }
            else
            {
                cout << "Error in opening record!!!" << endl;
            }
        }
        else
        {
            cout << "Only numbers are allowed!!!" << endl;
        }
    }
    else
    {
        cout << "Phone number should be of 10 digits only." << endl;
    }
    phone.close();
}

// Method 4
// Helper method
void Phonebook::searchContact()
{
    bool found = false;
    ifstream myfile("number.txt");
    string keyword;
    cout << "Enter Name to search : ";
    cin >> keyword;
    while (myfile >> fname >> lname >> phone_num)
    {
        if (keyword == fname || keyword == lname)
        {
            cout << "CONTACT DETAILS" << endl;
            cout << "First Name : " << fname << endl;
            cout << "Last Name : " << lname << endl;
            cout << "Phone Number : " << phone_num << endl;
            found = true;
            // break;
        }
    }
    if (found == false)
        cout << "No such contact is found!!!" << endl;
}

// Method 5
// Helper method
bool Checker::check_digits(string x)
{
    if (x.length() == 10)
        return true;
    else
        return false;
}

// Method 6
// Helper method
bool Checker::check_numbers(string x)
{
    bool check = true;

    for (int i = 0; i < x.length(); i++)
    {
        if (!(int(x[i]) >= 48 && int(x[i]) <= 57))
        {
            check = false;
            break;
        }
    }

    if (check == true)
        return true;

    if (check == false)
        return false;
}

// Method 7
// Main driver method
int main()
{
    int choice;
    do
    {
        cout << "CONTACT SAVER" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Search Contact" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        // Switch case
        switch (choice)
        {
        case 1:
            p.addContact();
            break;

        case 2:
            p.searchContact();
            break;

        case 3:
            p.display();
            break;

        case 4:
            self_exit();
            break;

        default:
            cout << "Invalid Input!!!" << endl;
        }
    } while (choice != 4);
    return 0;
}

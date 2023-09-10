#include <iostream>
using namespace std;

class Electricity
{
    string name;
    int units;
    int charges;

public:
    void input();
    void calculate();
    void display();
};

void Electricity ::input()
{
    cout << "Enter The Name Of User : ";
    cin >> name;
    cout << "Enter The Units Used By " << name << " : ";
    cin >> units;
    calculate();
}

void Electricity ::calculate()
{
    if (units == 0)
    {
        charges = 50;
    }
    else if (units <= 100)
    {
        charges = 60 * units;
    }
    else if (units <= 200 && units > 100)
    {
        charges = 80 * units;
    }
    else
    {
        int basic_charges = 90 * units;
        charges = basic_charges + (basic_charges * 15) / 100;
    }
}

void Electricity ::display()
{
    cout << name << " Is Used " << units << " Units Electricity So " << name << " Have To Pay " << charges << " Rs." << endl;
}

int main()
{
    int n;
    cout << "Enter The Number Of User : ";
    cin >> n;
    Electricity el[n];
    for (int i = 0; i < n; i++)
    {
        el[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        el[i].display();
    }
    return 0;
}
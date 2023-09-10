#include <iostream>
using namespace std;
class atime
{
    int hours, mins;

public:
    atime()
    {
        hours = 00;
        mins = 00;
    }
    atime(int x, int y)
    {
        hours = x;
        mins = y;
    }
    atime(int x)
    {
        mins = x;
    }
    void display()
    {
        cout << "Time Is " << hours << " Hours " << mins << " Minutes.";
    }
    friend void sum(atime &a, atime &b);
};
void sum(atime &a, atime &b)
{
    a.hours = a.hours + b.hours;
    a.mins = a.mins + b.mins;
    while (a.mins > 59)
    {
        a.hours++;
        a.mins = a.mins - 60;
    }
}
int main()
{
    int x, y;
    cout << "Enter Hours And Minutes : ";
    cin >> x >> y;
    atime a(x, y);
    cout << "Enter Hours And Minutes That You Went To Add : ";
    cin >> x >> y;
    atime b(x, y);
    sum(a, b);
    a.display();
    return 0;
}

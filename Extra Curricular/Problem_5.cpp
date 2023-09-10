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
    void sum(atime a)
    {
        hours = hours + a.hours;
        mins = mins + a.mins;
        while (mins > 59)
        {
            hours++;
            mins = mins - 60;
        }
    }
    void display()
    {
        cout << "Time Is " << hours << " Hours " << mins << " Minutes." << endl;
    }
};

int main()
{
    int x, y;
    cout << "Enter Hour And Minutes : ";
    cin >> x >> y;
    atime a(x, y);
    cout << "Enter Hour And Minutes That You Went To Add : ";
    cin >> x >> y;
    atime b(x, y);
    a.sum(b);
    a.display();
    return 0;
}

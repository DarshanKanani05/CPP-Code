#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }

    void getData()
    {
        cout << "The Value Of A Is " << a << "." << endl;
    }
};

int main()
{
    A a;
    a.setData(45);
    a.getData();
    return 0;
}
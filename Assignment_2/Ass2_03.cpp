#include <iostream>
using namespace std;
class date_time
{
    int day;
    int month;
    int year;
    int hour;
    int minuts;
    int second;

public:
    void input_date();
    void input_time();
    void format_date();
    void diff();
    void leap();
    void r_day();
    void r_month();
    void r_year();
    void r_hour();
    void r_minuts();
    void r_second();
};

void date_time::input_date()
{
    int temp1, temp2;
    cout << "Enter The Month : ";
    cin >> temp1;
    if (temp1 > 0 && temp1 <= 12)
    {
        month = temp1;
        cout << "Enter The Date : ";
        cin >> temp2;
    }
    else
    {
        cout << "Invalid Month!!!";
    }
}

void date_time::input_time()
{
    // cout<<"Enter The Time In hh:mm:ss Format : ";
    // cin>>hour>>minuts>>second;
    // cout<<"Your Enter Time Is "<<hour<<":"<<minuts<<":"<<second<<".";
}

int main()
{
    date_time dt;
    dt.input_date();
    dt.input_time();
    return 0;
}
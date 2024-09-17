#include <iostream>
using namespace std;
class Time
{

    int h, m;

public:
    Time(int h, int m) : h(h), m(m) {}

    void addMin(int min)
    {
        m += min;
        h += m / 60;
        m = m % 60;
        h %= 24;
    }
    void displayTime()
    {
        cout << "\nTime is Hour: " << h << "    Minutes :- " << m;
    }
};

int main()
{

    int hour, min, addMin;

    cout << "Enter Hour :- ";
    cin >> hour;
    cout << "Enter Minute :- ";
    cin >> min;

    Time t(hour,min);

    cout<<"Enter Extra Minutes you wanted to add :- ";
    cin >> addMin;

    t.addMin(addMin);

    t.displayTime();

    return 0;
}
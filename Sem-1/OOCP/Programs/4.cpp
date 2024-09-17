#include <iostream>
using namespace std;
class Date
{

    int year, month, day;
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

public:
    Date(int y, int m, int d) : year(y), month(m), day(d) {}

    void addDays(int d)
    {
        day += d;

        while (day > daysInMonth[month - 1])
        {
            day -= daysInMonth[month - 1];
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
    }
    void displayDate()
    {
        cout << "\nDate :- " << day << " / " << month << " / " << year;
    }
};

int main()
{

    int d, m, y, addDays;

    cout << "\nEnter Day :- ";
    cin >> d;
    cout << "\nEnter Month :- ";
    cin >> m;
    cout << "\nEnter Year :- ";
    cin >> y;

    Date d1(y, m, d);

    cout << "Enter Extra Days you wanted to add :- ";
    cin >> addDays;

    d1.addDays(addDays);
    d1.displayDate();
    return 0;
}
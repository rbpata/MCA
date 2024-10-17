#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Constructor to initialize the date
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    // Overloading the + operator
    Date operator+(int days) const {
        Date newDate = *this;
        newDate.day += days;
        while (newDate.day > 30) {
            newDate.day -= 30;
            newDate.month++;
            if (newDate.month > 12) {
                newDate.month = 1;
                newDate.year++;
            }
        }
        return newDate;
    }

    // Overloading the - operator
    Date operator-(int days) const {
        Date newDate = *this;
        newDate.day -= days;
        while (newDate.day <= 0) {
            newDate.day += 30;
            newDate.month--;
            if (newDate.month <= 0) {
                newDate.month = 12;
                newDate.year--;
            }
        }
        return newDate;
    }

    // Overloading the = operator
    Date& operator=(const Date& other) {
        if (this != &other) {
            day = other.day;
            month = other.month;
            year = other.year;
        }
        return *this;
    }

    // Overloading the < operator
    bool operator<(const Date& other) const {
        if (year < other.year) return true;
        if (year == other.year && month < other.month) return true;
        if (year == other.year && month == other.month && day < other.day) return true;
        return false;
    }

    // Overloading the <= operator
    bool operator<=(const Date& other) const {
        return *this < other || *this == other;
    }

    // Overloading the > operator
    bool operator>(const Date& other) const {
        return !(*this <= other);
    }

    // Overloading the >= operator
    bool operator>=(const Date& other) const {
        return !(*this < other);
    }

    // Overloading the == operator
    bool operator==(const Date& other) const {
        return (day == other.day && month == other.month && year == other.year);
    }

    // Overloading the != operator
    bool operator!=(const Date& other) const {
        return !(*this == other);
    }

    // Overloading the pre-increment operator
    Date& operator++() {
        *this = *this + 1;
        return *this;
    }

    // Overloading the post-increment operator
    Date operator++(int) {
        Date temp = *this;
        ++(*this);
        return temp;
    }

    // Overloading the pre-decrement operator
    Date& operator--() {
        *this = *this - 1;
        return *this;
    }

    // Overloading the post-decrement operator
    Date operator--(int) {
        Date temp = *this;
        --(*this);
        return temp;
    }

    // Function to display the date
    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d1(28, 12, 2023);
    Date d2;

    d2 = d1 + 5;
    cout << "d1 + 5 days: ";
    d2.display();

    d2 = d1 - 10;
    cout << "d1 - 10 days: ";
    d2.display();

    cout << "d1 == d2: " << (d1 == d2 ? "True" : "False") << endl;
    cout << "d1 != d2: " << (d1 != d2 ? "True" : "False") << endl;
    cout << "d1 < d2: " << (d1 < d2 ? "True" : "False") << endl;
    cout << "d1 <= d2: " << (d1 <= d2 ? "True" : "False") << endl;
    cout << "d1 > d2: " << (d1 > d2 ? "True" : "False") << endl;
    cout << "d1 >= d2: " << (d1 >= d2 ? "True" : "False") << endl;

    cout << "Pre-increment d1: ";
    (++d1).display();

    cout << "Post-increment d1: ";
    (d1++).display();
    d1.display();

    cout << "Pre-decrement d1: ";
    (--d1).display();

    cout << "Post-decrement d1: ";
    (d1--).display();
    d1.display();

    return 0;
}

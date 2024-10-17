#include <iostream>
using namespace std;

class Time {
private:
    int hour, minute, second;

public:

    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

    Time operator+(int seconds) const {
        Time newTime = *this;
        newTime.second += seconds;
        while (newTime.second >= 60) {
            newTime.second -= 60;
            newTime.minute++;
            if (newTime.minute >= 60) {
                newTime.minute -= 60;
                newTime.hour++;
                if (newTime.hour >= 24) {
                    newTime.hour -= 24;
                }
            }
        }
        return newTime;
    }

    Time operator-(int seconds) const {
        Time newTime = *this;
        newTime.second -= seconds;
        while (newTime.second < 0) {
            newTime.second += 60;
            newTime.minute--;
            if (newTime.minute < 0) {
                newTime.minute += 60;
                newTime.hour--;
                if (newTime.hour < 0) {
                    newTime.hour += 24;
                }
            }
        }
        return newTime;
    }

    Time& operator=(const Time& other) {
        if (this != &other) {
            hour = other.hour;
            minute = other.minute;
            second = other.second;
        }
        return *this;
    }

    bool operator<(const Time& other) const {
        if (hour < other.hour) return true;
        if (hour == other.hour && minute < other.minute) return true;
        if (hour == other.hour && minute == other.minute && second < other.second) return true;
        return false;
    }

    bool operator<=(const Time& other) const {
        return *this < other || *this == other;
    }

    bool operator>(const Time& other) const {
        return !(*this <= other);
    }

    bool operator>=(const Time& other) const {
        return !(*this < other);
    }


    bool operator==(const Time& other) const {
        return (hour == other.hour && minute == other.minute && second == other.second);
    }

    bool operator!=(const Time& other) const {
        return !(*this == other);
    }

    Time& operator++() {
        *this = *this + 1;
        return *this;
    }


    Time operator++(int) {
        Time temp = *this;
        ++(*this);
        return temp;
    }

    Time& operator--() {
        *this = *this - 1;
        return *this;
    }

    Time operator--(int) {
        Time temp = *this;
        --(*this);
        return temp;
    }

    void display() const {
        cout << (hour < 10 ? "0" : "") << hour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second << endl;
    }
};

int main() {
    Time t1(23, 59, 50);
    Time t2;

    t2 = t1 + 15;
    cout << "t1 + 15 seconds: ";
    t2.display();

    t2 = t1 - 70;
    cout << "t1 - 70 seconds: ";
    t2.display();

    cout << "t1 == t2: " << (t1 == t2 ? "True" : "False") << endl;
    cout << "t1 != t2: " << (t1 != t2 ? "True" : "False") << endl;
    cout << "t1 < t2: " << (t1 < t2 ? "True" : "False") << endl;
    cout << "t1 <= t2: " << (t1 <= t2 ? "True" : "False") << endl;
    cout << "t1 > t2: " << (t1 > t2 ? "True" : "False") << endl;
    cout << "t1 >= t2: " << (t1 >= t2 ? "True" : "False") << endl;

    cout << "Pre-increment t1: ";
    (++t1).display();

    cout << "Post-increment t1: ";
    (t1++).display();
    t1.display();

    cout << "Pre-decrement t1: ";
    (--t1).display();

    cout << "Post-decrement t1: ";
    (t1--).display();
    t1.display();

    return 0;
}

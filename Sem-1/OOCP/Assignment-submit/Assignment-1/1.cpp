#include <iostream>
using namespace std;

class Student {
    int rollno;
    string name;
    int oocpMarks, aiMarks, mfMarks;

public:
    Student(int rollno = 0, string name = "", int oocpMarks = 0, int aiMarks = 0, int mfMarks = 0) {
        this->rollno = rollno;
        this->name = name;
        this->oocpMarks = oocpMarks;
        this->aiMarks = aiMarks;
        this->mfMarks = mfMarks;
    }

    int getTotal() const {
        return oocpMarks + aiMarks + mfMarks;
    }

    float getPer() const {
        return (getTotal() / 300.0f) * 100;
    }

    void display() const {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "OOCP Marks: " << oocpMarks << endl;
        cout << "AI Marks: " << aiMarks << endl;
        cout << "MF Marks: " << mfMarks << endl;
        cout << "Total Marks: " << getTotal() << endl;
        cout << "Percentage: " << getPer() << "%" << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student* s = new Student[n];

    for (int i = 0; i < n; i++) {
        int rollno, oocpMarks, aiMarks, mfMarks;
        string name;

        cout << "\nEnter details for student " << i + 1 << endl;
        cout << "Roll No: ";
        cin >> rollno;
        cout << "Name: ";
        cin >> name;
        cout << "OOCP Marks: ";
        cin >> oocpMarks;
        cout << "AI Marks: ";
        cin >> aiMarks;
        cout << "MF Marks: ";
        cin >> mfMarks;

        s[i] = Student(rollno, name, oocpMarks, aiMarks, mfMarks);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].getPer() < s[j + 1].getPer()) {
                swap(s[j], s[j + 1]);
            }
        }
    }

    cout << "\nStudent Details (sorted by percentage):\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
        cout << endl;
    }

    delete[] s;

    return 0;
}

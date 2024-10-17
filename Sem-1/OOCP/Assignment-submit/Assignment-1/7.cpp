#include <iostream>
using namespace std;

class Student
{

    int id;
    string name;

public:
    static int count;
    void inputData()
    {
        cout << "\nEnter STudent ID : ";
        cin >> id;
        cout << "\nEnter Student name : ";
        cin >> name;
        count++;
    }
    void showData()
    {

        cout << "\n----Student Details---- ";
        cout << "\nID :- " << id;
        cout << "\nName :- " << name;
    }
};
int Student ::count = 0;
int main()
{
    Student s1, s2;
    s1.inputData();
    s2.inputData();

    s1.showData();
    s2.showData();

    cout << "\nNumber of student Registered is :- " << Student::count;
}
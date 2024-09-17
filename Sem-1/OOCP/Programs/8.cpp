#include <iostream>
#include <string>
using namespace std;

class STUDENT
{
private:
    int rollno;
    string name;
    int age;
    int marks[3];               
    static int passingMarks[3];

public:
    STUDENT(int r, string n, int a) : rollno(r), name(n), age(a)
    {
        for (int i = 0; i < 3; i++)
        {
            marks[i] = passingMarks[i];
        }
    }

    void modifyMarks(int rollnoToUpdate)
    {
        if (rollno == rollnoToUpdate)
        {
            cout << "Enter new marks for student " << name << " (Roll no: " << rollno << "):" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << "Enter marks for subject " << (i + 1) << ": ";
                cin >> marks[i];
            }
            cout << "Marks updated successfully." << endl;
        }
    }

    void display()
    {
        cout << "Roll No: " << rollno << ", Name: " << name << ", Age: " << age << endl;
        cout << "Marks: " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Subject " << (i + 1) << ": " << marks[i] << endl;
        }
    }

    int getRollno()
    {
        return rollno;
    }
};

int STUDENT::passingMarks[3] = {40, 40, 40};

int main()
{
    int rollnoToModify;
    STUDENT student1(1, "Ram", 20);
    STUDENT student2(2, "Bhavesh", 21);
    STUDENT student3(3, "Mihir", 22);

    cout << "Initial student details : " << endl;
    student1.display();
    student2.display();
    student3.display();

    cout << "Enter the roll number of the student whose marks you want to modify: ";
    cin >> rollnoToModify;

    student1.modifyMarks(rollnoToModify);
    student2.modifyMarks(rollnoToModify);
    student3.modifyMarks(rollnoToModify);

    cout << "\nUpdated student details : " << endl;
    student1.display();
    student2.display();
    student3.display();

    return 0;
}

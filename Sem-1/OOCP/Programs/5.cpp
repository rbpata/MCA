#include<iostream>
using namespace std;

class Employee{

    int id;
    string name;
    double basicSalary;
    double hra,da,oa;
    public:
        Employee(int id=0, string name="", double basicSalary=0): id(id), name(name),basicSalary(basicSalary){
            hra = 0.20 * basicSalary;
            da = 0.30 * basicSalary;
            oa = 0.10 * basicSalary; 
        } 
        void showData(){
            cout<<"\n--------------------Employee Detail--------------------";
            cout<<"\nEmployee ID :- "<<id;
            cout<<"\nEmployee Name :- "<<name;
            cout<<"\nEmployee Gross Salary :- "<<basicSalary+da+oa+hra;
        }

};
int main(){

    int no;
    Employee emp[5];
    cout<<"\nHow Many Employees :- ";
    cin>>no;
    for(int i=0; i<no; i++){
        int empId;
        string name;
        double basicSalary;
        cout<<"\nEnter Details of "<<i+1<<" EMployee.";
        cout<<"\nEnter ID : ";
        cin>>empId;
        cout<<"\nEnter Name : ";
        cin>>name;
        cout<<"\nENter Basic Salary :";
        cin>>basicSalary;
        emp[i] = Employee(empId,name,basicSalary);

    }

    for(int i=0;i<no;i++){
        emp[i].showData();
    }

    return 0;
}
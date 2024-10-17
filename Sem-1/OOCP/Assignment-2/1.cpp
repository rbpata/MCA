#include<iostream>
using namespace std;

class Number{
    int num1, num2;

    public :
        Number(int num1=0,int num2=0):num1(num1),num2(num2) {}
        
        Number operator +(Number other){
            Number res;
            res.num1 = num1 + other.num1;
            res.num2 = num2 + other.num2;
            return res;
        }


        void print(){
            cout<<"Num 1 : "<<num1<<endl;
            cout<<"Num 2 : "<<num2<<endl;
        }
};

int main(){
    Number n1(2,3) ,n2(3,4),n3;
    n3 = n1+n2;
    n3.print();
}
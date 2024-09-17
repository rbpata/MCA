#include <iostream>
using namespace std;

class Num
{
    int n1, n2, n3, n4;
    float sum, avg;

public:
    Num(int n1, int n2, int n3, int n4)
    {
        this->n1 = n1;
        this->n2 = n2;
        this->n3 = n3;
        this->n4 = n4;
    }
    void total()
    {
        sum = n1 + n2 + n3 + n4;
        cout << "\nSum of the All numbers is :- " << sum;
    }
    void avrg()
    {
        avg = float(sum / 4);
        cout << "\nAverage of the All numbers is :- " << avg;
    }
};

int main()
{

    Num n1(1, 2, 3, 4);
    n1.total();
    n1.avrg();
}
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize the complex number
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overloading the - operator
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overloading the * operator
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Overloading the == operator
    bool operator==(const Complex& other) const {
        return (real == other.real && imag == other.imag);
    }

    // Overloading the != operator
    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }

    // Overloading the = operator
    Complex& operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imag = other.imag;
        }
        return *this;
    }

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;
    bool isEqual = (c1 == c2);
    bool isNotEqual = (c1 != c2);

    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();

    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();
    cout << "Product: ";
    prod.display();
    cout << "c1 == c2: " << (isEqual ? "True" : "False") << endl;
    cout << "c1 != c2: " << (isNotEqual ? "True" : "False") << endl;

    return 0;
}

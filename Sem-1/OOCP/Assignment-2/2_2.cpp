#include <iostream>
using namespace std;

class arrayContainer {
private:
    int* arr;
    int size;

public:
    // Constructor to initialize the array and its size
    arrayContainer(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = i + 1; // Initializing array with values 1, 2, 3, ...
        }
    }

    // Destructor to free the allocated memory
    ~arrayContainer() {
        delete[] arr;
    }

    // Friend function to overload the * operator
    friend arrayContainer operator*(int num, const arrayContainer& obj);

    // Function to display the array elements
    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Overloading the * operator to multiply each element by a number
arrayContainer operator*(int num, const arrayContainer& obj) {
    arrayContainer result(obj.size);
    for (int i = 0; i < obj.size; ++i) {
        result.arr[i] = obj.arr[i] * num;
    }
    return result;
}

int main() {
    arrayContainer obj(5); // Creating an object with an array of size 5
    cout << "Original array: ";
    obj.display();

    arrayContainer result = 5 * obj; // Using the overloaded * operator
    cout << "Array after multiplication: ";
    result.display();

    return 0;
}

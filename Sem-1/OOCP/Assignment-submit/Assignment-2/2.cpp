#include <iostream>
using namespace std;

class arrayContainer {
private:
    int* arr;
    int size;

public:
    arrayContainer(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = 1;
        }
    }

    ~arrayContainer() {
        delete[] arr;
    }

    arrayContainer operator*(int num) {
        arrayContainer result(size);
        for (int i = 0; i < size; ++i) {
            result.arr[i] = this->arr[i] * num;
        }
        return result;
    }

    void input(){
        cout<<"\nEnter Array Elements : ";
        for(int i = 0; i < size; i++) {
            cin>>arr[i];
        }
    }

    void display() {
        cout<<"\nArray Elements : [ ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << " ] ";
    }
};

int main() {

    int size;
    cout<<"Enter Size of an Array :- ";
    cin>>size;



    arrayContainer obj(size);
    obj.input();

    cout <<"\nOriginal array: ";
    obj.display();

    arrayContainer result = obj * 3; 
    cout <<"\nArray after multiplication: ";
    result.display();

    return 0;
}
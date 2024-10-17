#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** data;

public:
    // Constructor to initialize the matrix with given dimensions
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                data[i][j] = i + j; // Initializing with some values
            }
        }
    }

    // Destructor to free the allocated memory
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Overloading the * operator to multiply a number with the matrix
    friend Matrix operator*(int num, const Matrix& mat);

    // Function to display the matrix
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

// Definition of the overloaded * operator
Matrix operator*(int num, const Matrix& mat) {
    Matrix result(mat.rows, mat.cols);
    for (int i = 0; i < mat.rows; ++i) {
        for (int j = 0; j < mat.cols; ++j) {
            result.data[i][j] = num * mat.data[i][j];
        }
    }
    return result;
}

int main() {
    Matrix m1(3, 3); // Creating a 3x3 matrix object
    cout << "Original matrix m1:" << endl;
    m1.display();

    Matrix result = 5 * m1; // Using the overloaded * operator
    cout << "Matrix after multiplication by 5:" << endl;
    result.display();

    return 0;
}

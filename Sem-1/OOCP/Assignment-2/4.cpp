#include <iostream>
using namespace std;

class Matrix
{
private:
    int rows, cols;
    int **data;

public:
    Matrix(int r, int c) : rows(r), cols(c)
    {
        data = new int *[rows];
        for (int i = 0; i < rows; ++i)
        {
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j)
            {
                data[i][j] = i + j;
            }
        }
    }

    void input()
    {
        cout << "\nEnter Matrix Elements : ";
        for (int i = 0; i < rows; ++i)
        {
            for (int j=0; j < cols; ++j)
            {
                cout << "\nEnter [" << i << "][" << j << "] ELement :- ";
                cin >> data[i][j];
            }
        }
    }

    ~Matrix()
    {
        for (int i = 0; i < rows; ++i)
        {
            delete[] data[i];
        }
        delete[] data;
    }

    friend ostream &operator<<(ostream &os, const Matrix &mat);
};

ostream &operator<<(ostream &os, const Matrix &mat)
{
    os << "\nMatrix Elements are :\n";
    for (int i = 0; i < mat.rows; i++)
    {
        for (int j=0; j < mat.cols; j++)
        {
            os<< mat.data[i][j]<<" ";
        }
        os<< endl;
    }
    return os;
}

int main()
{
    int row,col;
    cout<<"\nEnter Row : ";
    cin>>row;
    cout<<"\nEnter Column : ";
    cin>>col;


    Matrix m1(row,col);
    m1.input();

    cout <<"\nMatrix m1 : " << endl;
    cout << m1;

    return 0;
}

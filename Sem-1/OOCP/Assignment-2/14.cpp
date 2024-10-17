#include <iostream>
#include <string>
using namespace std;

// Generic template function to sort arrays
template <typename T>
void sortArray(T arr[], int n)
{
    // Using Bubble Sort for simplicity
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap the elements if they are in the wrong order
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int choice;
    do
    {
        cout << "\n--------------- MAIN Menu --------------:\n";
        cout << "1. Sort Integer Array\n";
        cout << "2. Sort Float Array\n";
        cout << "3. Sort Character String\n";
        cout << "4. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int n;
            cout << "\nEnter the number of elements: ";
            cin >> n;
            int arr[n];

            cout << "\nEnter the integer elements:\n";
            for (int i = 0; i < n; ++i)
            {
                cin >> arr[i];
            }

            sortArray(arr, n);
            cout << "\nSorted Integer Array: ";
            printArray(arr, n);
            break;
        }
        case 2:
        {
            int n;
            cout << "\nEnter the number of elements: ";
            cin >> n;
            float arr[n];

            cout << "\nEnter the float elements:\n";
            for (int i = 0; i < n; ++i)
            {
                cin >> arr[i];
            }
            sortArray(arr, n);
            cout << "\nSorted Float Array: ";
            printArray(arr, n);
            break;
        }
        case 3:
        {
            string str;
            cout << "\nEnter a string: ";
            cin >> str;
            int n = str.length();
            char arr[n + 1];

            for (int i = 0; i < n; ++i)
            {
                arr[i] = str[i];
            }

            sortArray(arr, n);
            cout << "\nSorted String: ";
            printArray(arr, n);
            break;
        }
        case 4:
            cout << "\nExiting the program." << endl;
            break;
        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

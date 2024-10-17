#include <iostream>
#include <stdexcept> // Include for out_of_range exception
using namespace std;

class String {
private:
    char* str;
    int length;

public:
    // Constructor to initialize the string
    String(const char* s = "") {
        length = 0;
        while (s[length] != '\0') length++;
        str = new char[length + 1];
        for (int i = 0; i < length; ++i) {
            str[i] = s[i];
        }
        str[length] = '\0';
    }

    // Copy constructor
    String(const String& other) {
        length = other.length;
        str = new char[length + 1];
        for (int i = 0; i < length; ++i) {
            str[i] = other.str[i];
        }
        str[length] = '\0';
    }

    // Destructor to free allocated memory
    ~String() {
        delete[] str;
    }

    // Overloading the == operator
    bool operator==(const String& other) const {
        if (length != other.length) return false;
        for (int i = 0; i < length; ++i) {
            if (str[i] != other.str[i]) return false;
        }
        return true;
    }

    // Overloading the <= operator
    bool operator<=(const String& other) const {
        int minLength = (length < other.length) ? length : other.length;
        for (int i = 0; i < minLength; ++i) {
            if (str[i] < other.str[i]) return true;
            if (str[i] > other.str[i]) return false;
        }
        return length <= other.length;
    }

    // Overloading the = operator
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str; // Free existing memory
            length = other.length;
            str = new char[length + 1];
            for (int i = 0; i < length; ++i) {
                str[i] = other.str[i];
            }
            str[length] = '\0';
        }
        return *this;
    }

    // Overloading the [] operator
    char& operator[](int index) { // Fixed function signature
        if (index >= 0 && index < length) {
            return str[index];
        }
        throw out_of_range("Index out of range");
    }

    // Function to reverse the string
    void reverse() {
        for (int i = 0; i < length / 2; ++i) {
            char temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;
        }
    }

    // Overloading the + operator
    String operator+(const String& other) const {
        String result;
        result.length = length + other.length;
        result.str = new char[result.length + 1];
        
        for (int i = 0; i < length; ++i) {
            result.str[i] = str[i];
        }
        
        for (int i = 0; i < other.length; ++i) {
            result.str[length + i] = other.str[i];
        }
        
        result.str[result.length] = '\0';
        
        return result;
    }

    // Function to display the string
    void display() const {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello"), s2("World"), s3;
    int choice;
    char ch;
    int index;

    do {
        cout << "\nMenu:\n";
        cout << "1. Compare two strings for equality\n";
        cout << "2. Check whether first string is smaller than the second\n";
        cout << "3. Copy the string to another\n";
        cout << "4. Extract a character from the string\n";
        cout << "5. Reverse the string\n";
        cout << "6. Concatenate two strings\n";
        cout << "7. Exit\n";
        
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Comparing s1 and s2: " << (s1 == s2 ? "Equal" : "Not Equal") << endl;
                break;
            case 2:
                cout << "Checking if s1 <= s2: " << (s1 <= s2 ? "True" : "False") << endl;
                break;
            case 3:
                s3 = s1; // Uses overloaded assignment operator
                cout << "Copied s1 to s3: ";
                s3.display();
                break;
            case 4:
                cout << "Enter index to extract character from s1: ";
                cin >> index;
                try {
                    ch = s1[index]; // Uses overloaded [] operator
                    cout << "Character at index " << index << ": " << ch << endl;
                } catch (out_of_range& e) {
                    cout << e.what() << endl;
                }
                break;
            case 5:
                s1.reverse();
                cout << "Reversed s1: ";
                s1.display();
                break;
            case 6:
                s3 = s1 + s2; // Uses overloaded + operator
                cout << "Concatenated s1 and s2: ";
                s3.display();
                break;
            case 7:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 7);

    return 0;
}
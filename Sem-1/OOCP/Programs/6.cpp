#include <iostream>
#include <string>
using namespace std;

class Book {
    int id;
    string name;
    double price;

public:

    Book(int id = 0, string name = "", double price = 0.0) : id(id), name(name), price(price) {}

    double getPrice() { return price; }

    void printData() {
        cout << "\n-----------------BOOK DETAILS-----------------\n";
        cout << "Book ID : " << id;
        cout << "\nBook Name : " << name;
        cout << "\nBook Price : " << price << endl;
    }
};

int main() {
    int no = 3; 
    Book b[20]; 

    for (int i = 0; i < no; i++) {
        int id;
        string name;
        double price;

        cout << "\nEnter Details of Book " << i + 1 << ".";
        cout << "\nEnter Book ID : ";
        cin >> id;

        cin.ignore();
        cout << "Enter Book Name : ";
        getline(cin, name); 

        cout << "Enter Price of the book : ";
        cin >> price;

        b[i] = Book(id, name, price);
    }

    for (int i = 0; i < no; i++) {
        for (int j = 0; j < no - i - 1; j++) {
            if (b[j].getPrice() > b[j + 1].getPrice()) {
                swap(b[j], b[j + 1]); 
            }
        }
    }

    for (int i = 0; i < no; i++) {
        b[i].printData();
    }

    return 0;
}

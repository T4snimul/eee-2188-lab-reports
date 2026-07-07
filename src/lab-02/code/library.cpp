#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    float price;

public:
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
        cout << title << " added to library." << endl;
    }

    void display() {
        cout << "\nTitle  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : " << price << endl;
    }

    ~Book() {
        cout << title << " removed from library." << endl;
    }
};

int main() {
    Book b1("C++ Basics", "Bjarne", 450);
    Book b2("Data Structures", "Mark", 550);
    Book b3("Algorithms", "Thomas", 600);

    b1.display();
    b2.display();
    b3.display();

    return 0;
}

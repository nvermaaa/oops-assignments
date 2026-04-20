#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int isbn;

    Book() {
        this->title = "";
        this->author = "";
        this->isbn = 0;
    }

    Book(string title, string author, int isbn) {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
    }

    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->isbn = b.isbn;
    }

    void display() {
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "ISBN: " << this->isbn << endl;
    }
};

class Library {
public:
    Book books[100];
    static int count;

    bool addNewBook(string title, string author, int isbn) {
        if (count >= 100)
            return false;

        books[count] = Book(title, author, isbn);
        count++;
        return true;
    }

    bool removeBooks(int isbn) {
        for (int i = 0; i < count; i++) {
            if (books[i].isbn == isbn) {
                for (int j = i; j < count - 1; j++) {
                    books[j] = books[j + 1];
                }
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            books[i].display();
            cout << endl;
        }
    }
};

int Library::count = 0;

int main() {

    Library lib;

    lib.addNewBook("C++ Basics", "Bjarne Stroustrup", 101);
    lib.addNewBook("Data Structures", "Mark Allen", 102);

    cout << "Library Books:\n";
    lib.displayDetails();

    lib.removeBooks(101);

    cout << "\nAfter Removal:\n";
    lib.displayDetails();

    Book arr1[2] = {
        Book("Math", "Author1", 201),
        Book("Physics", "Author2", 202)
    };

    cout << "\nInitializer List Objects:\n";
    for (int i = 0; i < 2; i++) {
        arr1[i].display();
        cout << endl;
    }

    int n = 2;
    Book *arr2 = new Book[n];

    arr2[0] = Book("Chemistry", "Author3", 301);
    arr2[1] = Book("Biology", "Author4", 302);

    cout << "\nDynamic Objects:\n";
    for (int i = 0; i < n; i++) {
        arr2[i].display();
        cout << endl;
    }

    delete[] arr2;

    return 0;
}
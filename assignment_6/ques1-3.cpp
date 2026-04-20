#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
  string title;
  string author;
  int isbn;

  void setDetails(string &title, string &author, int &isbn);
  void display();
};

void Book::setDetails(string &title, string &author, int &isbn)
{
  this->title = title;
  this->author = author;
  this->isbn = isbn;
}

void Book::display()
{
  cout << "Title: " << this->title << endl;
  cout << "Author: " << this->author << endl;
  cout << "ISBN: " << this->isbn << endl;
}

class Library
{
public:
  Book books[100];
  static int count;

  bool addNewBook(string &title, string &author, int &isbn);
  bool removeBooks(int isbn);
  void displayDetails();
};

int Library::count = 0;

bool Library::addNewBook(string &title, string &author, int &isbn)
{
  if (count >= 100)
  {
    return false;
  }
  books[count].setDetails(title, author, isbn);
  count++;
  return true;
}

bool Library::removeBooks(int isbn)
{
  for (int i = 0; i < count; i++)
  {
    if (books[i].isbn == isbn)
    {
      for (int j = i; j < count - 1; j++)
      {
        books[j] = books[j + 1];
      }
      count--;
      return true;
    }
  }
  return false;
}

void Library::displayDetails()
{
  for (int i = 0; i < count; i++)
  {
    books[i].display();
    cout << endl;
  }
}

int main()
{
  Library lib;

  string t1 = "C++";
  string a1 = "Bjarne";
  int i1 = 101;

  string t2 = "DSA";
  string a2 = "Mark";
  int i2 = 102;

  lib.addNewBook(t1, a1, i1);
  lib.addNewBook(t2, a2, i2);

  cout << "Books in Library:\n";
  lib.displayDetails();

  lib.removeBooks(101);

  cout << "\nAfter Removal:\n";
  lib.displayDetails();

  return 0;
}
//Justin O. Laurel

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    int year;
    int rating;

    Book(string t, string a, int y, int r) : title(t), author(a), year(y), rating(r) {}
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(string title, string author, int year, int rating) {
        Book newBook(title, author, year, rating);
        books.push_back(newBook);
        cout << "Book added successfully!" << endl;
    }

    void displayBooks() {
        cout << "Book List:" << endl;
        cout << "Title     Author  Year   Rating" << endl;
        for (const auto& book : books) {
            cout << book.title << "    " << book.author << "    " << book.year << "    " << book.rating << endl;
        }
    }

    void searchBook(string title) {
        for (const auto& book : books) {
            if (book.title == title) {
                cout << "Book found!" << endl;
                cout << "Title: " << book.title << endl;
                cout << "Author: " << book.author << endl;
                cout << "Year: " << book.year << endl;
                cout << "Rating: " << book.rating << endl;
                return;
            }
        }
        cout << "Book not found!" << endl;
    }
};

int main() {
    Library lib;
    int choice;
    string title, author;
    int year, rating;

    while (true) {
        cout << "Menu" << endl;
        cout << "1 - Add Book" << endl;
        cout << "2 - Display Books" << endl;
        cout << "3 - Search Book" << endl;
        cout << "4 - Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter title: ";
                cin >> ws;
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter year: ";
                cin >> year;
                cout << "Enter rating (1 to 5): ";
                cin >> rating;
                lib.addBook(title, author, year, rating);
                break;
            case 2:
                lib.displayBooks();
                break;
            case 3:
                cout << "Enter a book to search: ";
                cin >> ws;
                getline(cin, title);
                lib.searchBook(title);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}

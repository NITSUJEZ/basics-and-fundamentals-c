#include <iostream>
#include <vector>
using namespace std;

class Book {
private:
    string title, author, releaseDate, genre;
    float rating;

public:

    Book(string t, string a, string r, string g, float rt) 
        : title(t), author(a), releaseDate(r), genre(g), rating(rt) {}
    
    void showDetails() {
        cout << "--- Book Details ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Release Date: " << releaseDate << endl;
        cout << "Genre: " << genre << endl;
        cout << "Rating: " << rating << "/5" << endl;
    }
};

int main() {
    vector<Book> books;
    string title, author, releaseDate, genre;
    float rating;
    
    cout << "Enter book title: ";
    getline(cin, title);
    
    cout << "Enter author: ";
    getline(cin, author);
    
    cout << "Enter release date: ";
    getline(cin, releaseDate);
    
    cout << "Enter genre: ";
    getline(cin, genre);
    
    cout << "Enter rating: ";
    cin >> rating;
    cin.ignore(); 
    
    books.push_back(Book(title, author, releaseDate, genre, rating));
    
    cout << "\nBook added successfully!\n";
    books.back().showDetails();
    
    return 0;
}
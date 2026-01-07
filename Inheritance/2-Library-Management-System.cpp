#include <iostream>
#include <vector>
#include <string>
using namespace std;

class LibraryItem {
protected:
    string title;
    string authorOrDirector;
    int publicationYear;

public:
    LibraryItem(string titleP, string authorOrDirectorP, int publicationYearP) {
        title = titleP;
        authorOrDirector = authorOrDirectorP;
        publicationYear = publicationYearP;
    }

    virtual void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author/Director: " << authorOrDirector << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }

};


class Book : public LibraryItem {
private:
    string ISBN;

public:
    Book(string titleP, string authorOrDirectorP, int publicationYearP, string isbnP)
        : LibraryItem(titleP, authorOrDirectorP, publicationYearP) {
        ISBN = isbnP;
    }

    void displayInfo() override {
       LibraryItem::displayInfo();
        cout << "ISBN: " << ISBN << endl;
         cout<<endl;
       
    }
};


class DVD : public LibraryItem {
private:
    int runtime; 

public:
    DVD(string titleP, string authorOrDirectorP, int publicationYearP, int runtimeP)
        : LibraryItem(titleP, authorOrDirectorP, publicationYearP) {
        runtime = runtimeP;
    }

    void displayInfo() override {
        LibraryItem::displayInfo();
        cout << "Runtime: " << runtime << " minutes" << endl;
        cout<<endl;
       
    }
};


class Library {
private:
    vector<LibraryItem*> items;

public:
    void addItem(LibraryItem* item) {
        items.push_back(item);
    }

    void displayAllItems() {
        for (LibraryItem* item : items) {
            item->displayInfo();
        }
    }

};





int main() {
    system("cls");
    Library library;

    Book book("The Great Gatsby", "F. Scott Fitzgerald", 1925, "978-3-16-148410-0");
    DVD  dvd("Inception", "Christopher Nolan", 2010, 148);

    library.addItem(&book);
    library.addItem(&dvd);

    library.displayAllItems();

    return 0;
}
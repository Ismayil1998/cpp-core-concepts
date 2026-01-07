#include <iostream>
#include <string>
using namespace std;


class Book{
    private:
    string title;
    string author;
    int publicationYear;
    string isbn;
    
    public:
    void setBookDetails(string titleParam, string authorParam, int publicationYearParam, string isbnParam){
        title=titleParam;
        author=authorParam;
        publicationYear=publicationYearParam;
        isbn=isbnParam;
    }

    void displayBookDetails(){
        cout<<"Book Title: "<<title<<endl;
        cout<<"Book Author: "<<author<<endl;
        cout<<"Book Publication Year: "<<publicationYear<<endl;
        cout<<"Book ISBN: "<<isbn<<endl;
    }
};



int main() {
      system("cls");
    Book book1;
    book1.setBookDetails("The Great Gatsby", "F. Scott Fitzgerald", 1925, "9780743273565");

    Book book2;
    book2.setBookDetails("To Kill a Mockingbird", "Harper Lee", 1960, "9780060935467");

    // Display book details
    cout << "Book 1 Details:" << endl;
    book1.displayBookDetails();
    cout << endl;

    cout << "Book 2 Details:" << endl;
    book2.displayBookDetails();
    cout << endl;

    return 0;
}

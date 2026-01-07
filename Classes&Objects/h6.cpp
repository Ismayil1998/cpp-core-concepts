
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;


class Book {
    private:
    string title;
    string author;
    int year;

    public:

    Book(){
        title="empty";
        author="empty";
        year=0;
    }

    Book(string titleP, string authorP, int yearP){
        title=titleP;
        author=authorP;
        year=yearP;
    }

    void setBook(string titleP, string authorP, int yearP) {
        title = titleP;
        author = authorP;
        year = yearP;
    }

    void displayInfo()const{
       cout<<"Book Title: "<<title<<endl;
       cout<<"Book Author: "<<author<<endl;
       cout<<"Book Publication Year: "<<year<<endl;
    }
};


int main() {
    system("cls");
    const int librarySize = 5;
    Book library[librarySize];
    

    cout << "Enter details for " << librarySize << " books:" << endl;
    for (int i = 0; i < librarySize; ++i) {
      string title, author;
      int year;

    cout << "\nBook " << i + 1 << ":" << endl;
    cout << "Title: ";
    getline(cin, title);
    cout << "Author: ";
    getline(cin, author);
    cout << "Year: ";
    cin >> year;
    cin.ignore();
    
    library[i].setBook(title, author, year); 
    }

    cout << endl << "Library Contents:" << endl;
    for (int i = 0; i < librarySize; ++i) {
         cout << "\nBook " << i + 1 <<endl;
        library[i].displayInfo();
    }

}
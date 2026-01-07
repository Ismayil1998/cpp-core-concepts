#include <iostream>
#include <string>
using namespace std;


class LibraryItem{
    protected:
    string title;
    int year;

    public:
    LibraryItem(){
        title="None";
        year=0;
    }

    LibraryItem(string titleP, int yearP){
        title=titleP;
        year=yearP;
    }

    virtual void checkout(){
        cout<<"Status: Checked out "<<endl;
    }

    virtual void checkin(){
        cout<<"Status: Checked in"<<endl;
    }

    virtual void displayInfo(){
        cout<<"Title: "<<title<<endl;
        cout<<"Year: "<<year<<endl;
    }

};

class Book: public LibraryItem{
    private:
    string  author;

    public:
    Book(){
        author="None";
    }
    Book(string titleP, string authorP, int yearP):LibraryItem(titleP,yearP),author(authorP){};

    void displayInfo()override{
        LibraryItem::displayInfo();
        cout<<"Author: "<<author<<endl;
        LibraryItem::checkout();
        cout<<endl;
    }

};

class EBook: public LibraryItem{
    private:
    string  format;

    public:

    EBook(){
        format="None";
    }

    EBook(string titleP, string formatP, int yearP):LibraryItem(titleP,yearP),format(formatP){};

    void displayInfo()override{
        LibraryItem::displayInfo();
        cout<<"Format: "<<format<<endl;
        LibraryItem::checkin();
        cout<<endl;
    }

};

class AudioCD: public LibraryItem{
    private:
    string artist;

    public:

    AudioCD(){
        artist="None";
    }

    AudioCD(string titleP, string artistP, int yearP):LibraryItem(titleP,yearP),artist(artistP){};

    void displayInfo()override{
        LibraryItem::displayInfo();
        cout<<"Artist: "<<artist<<endl;
        LibraryItem::checkout();
        cout<<endl;
    }

};



int main() {
    system("cls");

    Book book("The Great Gatsby", "F. Scott Fitzgerald", 1925 );
    EBook eb("The Hitchhiker's Guide to the Galaxy", "EPUB", 1979);
    AudioCD audio("Abbey Road", "The Beatles", 1969 );

    LibraryItem* libra[]={&book, &eb, &audio};

    for (int i = 0; i < 3; i++)
    {
        libra[i]->displayInfo();
    }
    
    
    

    return 0;
}

#include <iostream>
#include <string>
using namespace std;


class LibraryItem {
    public:
        LibraryItem(const string& title):title(title){
            totalItems++;
        }

        virtual double calculateLateFee(int daysLate) const = 0;

        virtual void displayInfo() const {
            cout << "Title: " << title << endl;
        }

        static int totalItems;

    protected:
        string title;
};


int LibraryItem::totalItems=0;

class Book : public LibraryItem {
    public:
        Book(const string& title, const string& author) : LibraryItem(title), author(author) {
            totalItems++;
        }

        double calculateLateFee(int daysLate) const override {
            double fee=2.5;
            double fee2=5.0;
            if (daysLate==1)
            {
                return fee;
            }else if (daysLate>=2)
            {
                return fee2;
            }else
            {
                return 0.0;
            }
            
            
        }

        void displayInfo() const override {
            LibraryItem::displayInfo();
            cout << "Author: " << author << std::endl;
            cout<<"Late fee: "<<calculateLateFee(1)<<endl;
            cout<<endl;
        }

    private:
        string author;
};

class DVD : public LibraryItem {
    public:
        DVD(const string& title, int duration) : LibraryItem(title), duration(duration) {
            totalItems++;
        }

        double calculateLateFee(int daysLate) const override {
            double fee=10.5;
            double fee2=20.0;
            if (daysLate==1)
            {
                return fee;
            }else if (daysLate>=2)
            {
                return fee2;
            }else
            {
                return 0.0;
            }
            
        }

        void displayInfo() const override {
            LibraryItem::displayInfo();
            cout << "Duration: " << duration << " minutes" << endl;
            cout<<"Late fee: "<<calculateLateFee(5)<<endl;
            cout<<endl;
            
        }

    private:
        int duration;
};


int main() {
    system("cls");
    Book b1("Dede Qorqud Dastani ", "Xalq");
    DVD d1("Bir Qalanin sirri ", 65);
    b1.displayInfo();
    d1.displayInfo();

    cout<<"Total Items: "<<LibraryItem::totalItems<<endl;
}

  
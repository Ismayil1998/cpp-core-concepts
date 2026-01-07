#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
    int id;
    string name;
    string designation;
    double salary;

    public:
    Employee()=default;

    Employee(int idParam, string nameParam, string designationParam, double salaryParam){
        id=idParam;
        name=nameParam;
        designation=designationParam;
        salary=salaryParam;
    }
    void setID(int i){
        id=i;
    }
    void setName(string n){
        name=n;
    }
    void setDesignation(string d){
        designation=d;
    }
    void setSalary(double s){
        salary=s;
    }

    void displayDetails(){
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Designation: "<<designation<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }

};

int main() {
     system("cls");
    Employee emp1(101, "John Doe", "Manager", 5000.0);
    Employee emp2;

    emp2.setID(102);
    emp2.setName("Jane Smith");
    emp2.setDesignation("Engineer");
    emp2.setSalary(4000.0);

    cout << "Employee 1 Details: " << endl;
    emp1.displayDetails();
    cout << endl;

    cout << "Employee 2 Details: " << endl;
    emp2.displayDetails();
    cout << endl;

    return 0;
}
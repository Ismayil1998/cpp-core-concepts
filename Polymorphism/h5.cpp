#include <iostream>
using namespace std; 


class Employee{
    protected:
    string name;
    double baseSalary; 

    public:
    Employee(){
        name="None";
        baseSalary=0.0;
    }
    
    Employee(string nameP, double baseSalaryP): name(nameP), baseSalary(baseSalaryP){};

      virtual double calculateSalary()const {
        return baseSalary;
      } 

       virtual void display() const {
        cout << "Employee Name: " << name << ", Salary: " << calculateSalary() << endl;
    }

      virtual ~Employee(){

      }
};

class Manager: public Employee{
   private:
   double bonus;

   public:
   Manager(){
    bonus=0.0;
   }

   Manager(string nameP, double baseSalaryP, double bonusP):Employee(nameP, baseSalaryP), bonus(bonusP){};

    double calculateSalary() const override {
        return baseSalary + bonus;
    }

    void display() const override {
        cout << "Manager - " << name << ", Salary: " << calculateSalary() << endl;
    }

};

class Developer: public Employee{
    private:
    int numberOfProjects;

    public:
    Developer(){
        numberOfProjects=0;
    }

    Developer(string nameP, double baseSalaryP, int numberOfProjectsPR):Employee(nameP,baseSalaryP),numberOfProjects(numberOfProjectsPR){};

   double calculateSalary() const override {
        return baseSalary + numberOfProjects * 1000;
    }

    void display() const override {
        cout << "Developer - " << name << ", Salary: " << calculateSalary() << endl;
    }
    
};





int main() {
    
    system("cls");
    const int numEmployees = 3;
    Employee* employees[numEmployees];

    employees[0] = new Manager("Alice", 50000, 10000);
    employees[1] = new Developer("Bob", 60000, 5);
    employees[2] = new Developer("Charlie", 55000, 3);

    for (int i = 0; i < numEmployees; i++) {
        employees[i]->display();
    }

     for (int i = 0; i < numEmployees; i++) {
       delete employees[i];
    }

    

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        string name;
        int age;
        string position;
        double salary;

    public:
        void setName(const string &name){
            this->name=name;
        }
        void setAge(int age){
            this->age=age;
        }
        void setPosition(const string& position){
            this->position=position;
        }
        void setSalary(double salary){
            this->salary=salary;
        }
        string getName()const{
            return name;
        }
        int getAge()const{
            return age;
        }
        string getPosition()const{
            return position;
        }
        double getSalary() const{
            return salary;
        }

};


int main() {
     system("cls");
    Employee em1;
    em1.setName("James");
    cout<<"Employee Name: "<<em1.getName()<<endl;
    em1.setAge(35);
    cout<<"Employee Age: "<<em1.getAge()<<endl;
    em1.setPosition("Manager");
    cout<<"Employee Position: "<<em1.getPosition()<<endl;
    em1.setSalary(3000.0);
    cout<<"Employee Salary: "<<em1.getSalary()<<endl;


    return 0;
}


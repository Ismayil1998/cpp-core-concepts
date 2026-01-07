#include <iostream>
#include <string>
using namespace std;


class Person{
    protected:
    string name;
    int age;
    int grades;

    public:

    Person(){
        name="None";
        age=0;
        grades=0;
    }

    Person(string nameP, int ageP, int gradesP){
        name=nameP;
        age=ageP;
        grades=gradesP;
    }

    int getGrades() const{
        return grades;
    }
};

class Teacher: public Person{
    public:
    Teacher(string nameP, int ageP, int gradeP):Person(nameP, ageP, gradeP){};

      void reviewGrades(){
        cout<<"Teacher " << name << " is reviewing grades: " << grades << endl;
      }

};



int main() {
    system("cls");

    Teacher teacher("Ms. Johnson", 35, 5);
    teacher.reviewGrades();  
    cout << "Teacher's grades: " << teacher.getGrades()<< endl;


    return 0;
}
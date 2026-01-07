#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;



struct Student {
    string name;
    int rollNumber;
    double mathMarks;
    double physicsMarks;
    double chemistryMarks;
};


class Classroom {
private:
    vector<Student> students;

public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void displayStudents() {
        for (const auto& s : students) {
            cout << "Name: " << s.name << endl;
            cout << "Roll Number: " << s.rollNumber << endl;
            cout << "Maths Marks: " << s.mathMarks << endl;
            cout << "Physics Marks: " << s.physicsMarks << endl;
            cout << "Chemistry Marks: " << s.chemistryMarks << endl;
            
        }
    }

    void displayAverageMarks() {
        for (const auto& s : students) {
            double average = (s.mathMarks + s.physicsMarks + s.chemistryMarks) / 3.0;
            cout << "Student: " << s.name << " (Roll No: " << s.rollNumber << ") ";
            cout << "- Average Marks: " << fixed << setprecision(2) << average << endl;
        }
    }
};


int main() {
       system("cls");
    Classroom classroom;

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << endl;

        Student student;
        cout << "Name: ";
        cin >> student.name;
        cout << "Roll Number: ";
        cin >> student.rollNumber;
        cout << "Maths Marks: ";
        cin >> student.mathMarks;
        cout << "Physics Marks: ";
        cin >> student.physicsMarks;
        cout << "Chemistry Marks: ";
        cin >> student.chemistryMarks;

        classroom.addStudent(student);
        cout << endl;
    }

    cout << "Details of all students:" << endl;
    classroom.displayStudents();

    cout << "Average marks of each student:" << endl;
    classroom.displayAverageMarks();
    
    return 0;
}
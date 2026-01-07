#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Project {
    protected:
    string projectName;

    public:
    Project(){
        projectName="None";
    }

    Project(string projectNameP){
        projectName=projectNameP;
    }

    void display(){
        cout<<"Project: "<<projectName<<endl;
    }
};

class TeamMember {
    protected:
    string memberName;

    public:
    TeamMember(){
        memberName="None";
    }

    TeamMember(string memberNameP){
        memberName=memberNameP;
    }

    void display(){
        cout<<"Team Member: "<<memberName<<endl;
    }
};

class Task {
    private:
    string taskName;

    public:
    Task(){
        taskName="None";
    }

    Task(string taskNameP){
        taskName=taskNameP;
    }

    void display(){
        cout<<"Task: "<<taskName<<endl;
    }
};

class ProjectTeamMember : public Project, public TeamMember {
    public:
    ProjectTeamMember(string projectNameP, string memberNameP ):Project(projectNameP),TeamMember(memberNameP){};

    void displayProjectTeamMember(){
        Project::display();
        TeamMember::display();
    }
};

class TeamMemberTask : public TeamMember, public Task {
    public:
    TeamMemberTask(string memberNameP,string taskNameP):TeamMember(memberNameP),Task(taskNameP){};

    void displayTeamMemberTask(){
        TeamMember::display();
        Task::display();
    }
};


int main() {

    system("cls");

    ProjectTeamMember ptm("Project X", "Alice");
    TeamMemberTask tmt("Bob", "Code Review");

    cout << "Project Team Member Information:" << endl;
    ptm.displayProjectTeamMember();

    cout << "\nTeam Member Task Information:" << endl;
    tmt.displayTeamMemberTask();

    return 0;
}
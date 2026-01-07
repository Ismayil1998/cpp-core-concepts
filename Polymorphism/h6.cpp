#include <iostream>
#include <string>
using namespace std;


class BackendService{
    public:
    void connect(){
      cout<<"It's connected to a generic Backend Service"<<endl;
    }

    virtual void performTask(){
      cout<<"It's performing a generic task"<<endl;
      cout<<endl;
    }
};


class DatabaseService: public BackendService{
      public:
      void connect(string massage ){
      cout<<"It's connected to a database: "<<massage<<endl;
    }

    void performTask()override{
      cout<<"It's performing a database-specific task."<<endl;
      cout<<endl;
    }
};


class APIService: public BackendService{
  public:
   void connect(string massage ){
      cout<<"it's connected to an API with the given API key: "<<massage<<endl;
    }

   void performTask()override{
      cout<<"It's performing an API-specific task"<<endl;
    }

    void connect(){
      cout<<"it's connected to an API without an API key. "<<endl;
      cout<<endl;
    }

};






int main() {
  system ("cls");

    BackendService genericService;
    DatabaseService database;
    APIService api;

    genericService.connect(); 
    genericService.performTask(); 

    database.connect("db_connection_string"); 
    database.performTask(); 

    api.connect("api_key"); 
    api.performTask(); 

  
    api.connect(); 

}

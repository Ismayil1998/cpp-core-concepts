#include <iostream>
#include <string>
using namespace std;

class DataStorageProvider {
    public:
       

         virtual void storeData(string data )=0;

        
         void logStorageAttempt(string data) {
            cout << "Storage attempt for data: Sample data " << data << " logged." << endl;
        }
        virtual ~DataStorageProvider(){};
};


class RelationalDatabaseStorage : public DataStorageProvider {
    public:
        void storeData(string data)override{
            cout<<"Storing data in a relational database: Sample data "<<data<<endl;
        }

       
};


class CloudNoSQLStorage : public DataStorageProvider {
    public:
       void storeData(string data) override {
            cout << "Storing data in a cloud-based NoSQL database: Sample data " << data << endl;
        }

};



int main() {
    system("cls");

    DataStorageProvider *relation= new RelationalDatabaseStorage();

    DataStorageProvider *cloud=new CloudNoSQLStorage();

    relation->storeData("1");
    relation->logStorageAttempt("1");
    cout<<endl<<endl;
    
    cloud->storeData("2");
    cloud->logStorageAttempt("2");

    delete relation;
    delete cloud;

}
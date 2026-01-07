#include <iostream>
#include <string>
using namespace std;

class DataStorage {
    public:
  
    virtual void storeData(const string& data)=0;
     virtual string retrieveData()=0;
    virtual ~DataStorage() {}   
};


class FileStorage : public DataStorage {
    private:
    string fileData;
    
    public:
     void storeData(const string& data)override{
        fileData=data;
     }

     string retrieveData()override{
        return fileData;
     }


    ~FileStorage() {
        cout << "FileStorage Destructor" << endl;
    }
};



class DatabaseStorage : public DataStorage {
    private:
    string dbData;

    public:
     void storeData(const string& data)override{
        dbData=data;
     }

     string retrieveData()override{
        return dbData;
     }

    ~DatabaseStorage() {
        cout << "DatabaseStorage Destructor" << endl;
    }
};


int main() {
    system("cls");
    FileStorage fileStorage;
    fileStorage.storeData("FileStorage Data");
    cout << "FileStorage: " << fileStorage.retrieveData() << endl;
     cout<<endl;
    DatabaseStorage databaseStorage;
    databaseStorage.storeData("DatabaseStorage Data");
    cout << "DatabaseStorage: " << databaseStorage.retrieveData() << endl;
}

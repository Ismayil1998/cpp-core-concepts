#include <iostream>
#include <string>

using namespace std;


class DatabaseConnection {
    public:
        virtual void connect() const = 0;
        virtual~ DatabaseConnection(){}
};

class MySqlConnection final : public DatabaseConnection {
    public:
        void connect() const override {
            cout << "Connecting to MySQL database..." << endl;
        
        }
};


class PostgresConnection final: public DatabaseConnection {
    public:
        void connect() const override {
            cout << "Connecting to PostgreSQL database..." << endl;
            
        }
};


class ConnectionFactory {
    public:
        DatabaseConnection* createMySQLConnection() {
            return new MySqlConnection();
        }

    
        DatabaseConnection* createPostgresConnection() {
            return new PostgresConnection();
        }
};


int main() {

 
    ConnectionFactory factory;
    DatabaseConnection* mysqlConnection = factory.createMySQLConnection();
    DatabaseConnection* postgresConnection = factory.createPostgresConnection();

     delete mysqlConnection;
     delete postgresConnection;

    return 0;
}

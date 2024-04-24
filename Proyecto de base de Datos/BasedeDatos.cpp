#include <iostream>
#include <SQLiteCpp/SQLiteCpp.h>

int main(){

    SQlite::Database database ("baseDedatos.txt", SQLite::OPEN_CREATE | SQLite::OPEN_READWRITE);

    database.exec("CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY, name TEXT, age INTEGER)");

    SQlite::Statement insert (dabase, "INSERT INTO users (name, age) VALUES (?, ?)")
    insert.bind(1, "Hugo Rivas");
    insert.bind(2, 23);
    insert.exec();

    SQlite::Statement query (database, "SELEC * FROM users");
    while (query.executeStep()){
            int id = query.getColumn(0);
            std::string name = query.getColumn(1);
            int age = query.getColumn(2);
            std::cout << "ID: " << id << ", Name: " << name << ", Age: " << age << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
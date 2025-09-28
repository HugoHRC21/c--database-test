#include<iostream>
#include <sqlite_modern_cpp.h>
using namespace  sqlite;
using namespace std;

int main() {
    try {
        // Abrir una conexión a la base de datos
        database db("baseDedatos.txt.txt"); // Crea una base de datos en memoria. También puedes especificar una ruta de archivo para crear una base de datos persistente.

        // Crear una tabla
        db << "CREATE TABLE users (id INTEGER PRIMARY KEY, name TEXT);";

        // Insertar datos en la tabla
        db << "INSERT INTO users (name) VALUES (?);" << "John Doe";
        db << "INSERT INTO users (name) VALUES (?);" << "Jane Smith";

        // Recuperar datos de la tabla
        auto result = db << "SELECT * FROM users;";
        for (auto& row : result) {
            int id;
            string name;
            row >> id >> name;
            cout << "ID: " << id << ", Name: " << name << endl;
        }


    return 0;
}
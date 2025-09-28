WORKDIR="C:\Users\Admin\Desktop\Hugo\c--database-test\Proyecto de base de Datos"

main.exe: sqlite3.o
	 C:\MinGW\bin\g++.exe -g "$(WORKDIR)\BasedeDatos.cpp"  -I "$(WORKDIR)\sqlite_modern_cpp-dev\hdr" -I "C:\Program Files\Sqlite" -L "C:\Program Files\Sqlite"  -o main.exe sqlite3.o -lsqlite3

sqlite3.o:
	gcc -c "C:\Program Files\Sqlite\sqlite3.c"
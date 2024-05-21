#include <iostream>
#include "variables.h"

using namespace std;

int menu();
void start();
void addGrade();
void showGrade();

int menu()
{
    int option;
    system("cls||clear");
    cout << "1. Ingrese notas" << endl;
    cout << "2. Mostrar notas" << endl;
    cout << "3. Nota mas alta" << endl;
    cout << "4. Nota mas baja" << endl;
    cout << "5. Promedio" << endl;
    cout << "6. Salir" << endl;
    cout << "Ingrese una opcion: " << endl;
    cin >> option;
    return option;
}

void start()
{
    int option;
    while (option != 6)
    {
        option = menu();
        switch (option)
        {
        case 1:
            cout << "Ingrese notas" << endl;
            addGrade();
            system("pause");
            break;
        case 2:
              showGrade();
              break;
        case 6:
            cout << "Salir" << endl;
            system("pause");
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    }
}

void addGrade()
{
    if (position < MAX)
    {
        cout << "ingresar la nota: ";
        cin >> grades[position];
        position++;
    }
    else
    {
        cout << "No hay espacio para mas notas" << endl;
    }
}
void showGrades()
{
    cout << "Mostrar notas" << endl;
    for (int i = 0; i < position; i++)
    {
        cout << "Nota " << i + 1 << ": " << grades[i] endl;
    }
    system("pause")
}

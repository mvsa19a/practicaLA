#include <iostream>

int main(int argc, char const *argv[])
{
    /*
    C- create
    R- read
    U-update
    D- Delete
    */

    // create
    void addReg();
    void showReg()
    void menu();
    void addReg(){
        cout << "Datos del estudiante\n";
        cout << "CIF: ";
        scanf("%[^\n]", people[position].cif);
        cout << "Nombre:";
        scanf("%[^\n]", people[position].name);
        cout << "APELIIDOS: ";
        scanf("%[^\n]", people[position].lastName);
        cout << "ANO: ";
        scanf("%d", &people[position].year);
        pos++;
    }
    void showReg()
    {
        for (int i = 0; i < position; i++)
        {
            printf("Nombre: %s %s \nAno: %d", people[i].name, people[i].lastName, people[i].year);
            cout << "*********************************************************\n";
        }
    }
    void menu()
    {
        int op == 0 do
        {
            cout << "1. agregar\n";
            cout << "2.Mostrar \n";
            cout << "3.Salir\n";
            cout << "opcion: ";
            cin >> op;
            {
                switch (op)
                {
                case 1:
                    addReg();
                    system("Pause");
                    break;
                case 2:
                    addReg();
                    system("pause");
                    break;
                case 3:
                    break;
                default:
                    break;
                }
            }
        }
        while (op == 3;)
    }
    return 0;
}

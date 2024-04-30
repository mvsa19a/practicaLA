#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "numeros impares del 1 al 5:\n";

    for (int i = 1; i <= 5; ++i)
    {
        if (i % 2 != 0)
        {
            cout << i << " es impar.\n";
        }
    }

    return 0;
}
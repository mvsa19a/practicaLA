/*7. Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego los ordene en forma ascendente utilizando el
algoritmo de ordenamiento de burbuja.*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num[5];
    int contador = 0;
    int i = 1;
    int a=0;

    cout << "dame 5 numeros";
    while (contador < 5)
    {
        cin >> num[contador];
        contador++;

        while (i < 5)
        {

            int v = 0;
            while (v < 5 - i)
                ;
            if (num[v] > num[v + 1])
            {
                int temporal = num[v];
                num[v] = num[v + 1];
                num[v + 1] = temporal;
            }
            v++
        }
        
        while(a < 5){
            cout << num[a] << endl;
            a++
        }
    return 0;
}
}

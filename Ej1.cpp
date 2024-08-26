#include <iostream>
#include "Lista/Lista.h"
using namespace std;

void PrintLista(Lista<int> &li, int p)
{
    for (int i = p; i < li.getTamanio(); i++)
    {
        cout << li.getDato(i) << "->";
    }
    cout << "Null\n";
}
void CargarLista(Lista<int> &li, int tam)
{
    int dato;
    for (int i = 0; i < tam; i++)
    {
        cout << "ingresar un numero: ";
        cin >> dato;
        li.insertarUltimo(dato);
    }
}

int main()
{
    Lista<int> datos;
    int tam, num;
    cout << "ingrese la cantidad de numeros de la lista: ";
    cin >> tam;
    CargarLista(datos, tam);
    cout << "ingrese a partir desde donde quiere usar: ";
    cin >> num;
    PrintLista(datos, num);

    return 0;
}

#include <iostream>
#include "Lista/Lista.h"

using namespace std;

void EliminarNumero(Lista<int> &li,int num){
    
    for (int i = 0; i < li.getTamanio(); i++)
    {
        if (li.getDato(i) == num)
        {
            li.remover(i);
            i--;
        }
        
    }
    
    
}

void CargarLista(Lista<int> &li,int tam){
    int dato;
    for (int i = 0; i < tam; i++)
    {
        cout << "ingresar un numero: ";
        cin >> dato;
        li.insertarUltimo(dato);
    }
    
}

int main() {

    Lista<int> datos;
    int tam,num;
    cout << "ingrese la cantidad de numeros de la lista: ";
    cin >> tam;
    CargarLista(datos,tam);
    cout << "la lista es: \n";
    datos.print();
    cout << "inserte el numero que quiere eliminar: ";
    cin >> num;
    EliminarNumero(datos,num);
    cout << "la lista es: \n";
    datos.print();


    return 0;
}

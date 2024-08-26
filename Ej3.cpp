#include <iostream>
#include "Lista/Lista.h"
using namespace std;

void CargarLista(Lista<int> &li,int tam){
    int dato;
    for (int i = 0; i < tam; i++)
    {
        cout << "ingresar un numero: ";
        cin >> dato;
        li.insertarUltimo(dato);
    }
    
}

void CopiarLista(Lista<int> li1,Lista<int> li2){
    if (li2.esVacia())
    {
        for (int i = 0; i < li1.getTamanio(); i++)
        {
            li2.insertarUltimo(li1.getDato(i));
        }
        
    }
    
    
}

void IntercambiarLista(Lista<int> &li1,Lista<int> &li2){
    
}


int main() {
    Lista<int> datos1,datos2;
    int tam1,tam2;
    cout << "ingrese la cantidad de numeros de la lista numero 1: ";
    cin >> tam1;
    CargarLista(datos1,tam1);
    datos1.print();
    cout << "ingrese la cantidad de numeros de la lista numero 2: ";
    cin >> tam2;
    CargarLista(datos2,tam2);
    datos2.print();
    IntercambiarLista(datos1,datos2);
    cout << "lista 1: ";
    datos1.print();
    cout << "lista 2: ";
    datos2.print();


    return 0;
}

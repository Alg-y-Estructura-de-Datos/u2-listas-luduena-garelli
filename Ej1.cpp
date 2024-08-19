#include <iostream>
#include "Lista/Lista.h"

/*Implementar una función llamada “printLista” que reciba una lista y una posición “p” e
imprima los elementos de esa lista a partir de la posición “p”. No debe modificarse la lista
original. Ej: listaOriginal: 1->2->3->4->5->6->7->8->9->10 con p=5 Por pantalla se verá:
5->6->7->8->9->10
*/

using namespace std;

void printList(Lista<int> l, int p)
{
  int size = l.getTamanio();

  if (p >= size || p < 0)
  {
    cout << "Posicion invalida" << endl;
  }

  for (int i = p; i < size; i++)
  {
    cout << l.getDato(i) << "->";
  }

  cout << "NULL" << endl;
}

int main(int argc, char const *argv[])
{
  cout << "Ejercicio 02/01 Listas " << endl;

  Lista<int> Lista;
  int n, d, p;

  cout << "Ingrese el tamaño de la Lista: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Ingrese el valor de la lista en la posicion: " << i << endl;
    cin >> d;
    Lista.insertarUltimo(d);
  }

  cout << "Ingrese la posicion desde donde desea imprimir la Lista: " << endl;
  cin >> p;

  printList(Lista, p);

  return 0;
}

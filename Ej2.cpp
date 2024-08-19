#include <iostream>
#include "Lista/Lista.h"

/*Implementar una función que recibe una lista de números enteros y un número entero “n” y
que modifique la lista borrando todos los elementos de la lista que tengan el número “n”.
Imprimir la lista antes de hacer el llamado a la función y luego del llamado a la función para
mostrar que la lista original cambió. ej: lista: 1->2->3->4->5->3->7->8->3->10 con n=3 debe
pasar con la función a 1->2->4->5->7->8.
*/

using namespace std;

void borrarElemento(Lista<int> &l, int n)
{
  int size = l.getTamanio();

  for (int i = 0; i < size; i++)
  {
    if (l.getDato(i) == n)
    {
      l.remover(i);
      i--;
      size--;
    }
  }
}

int main(int argc, char const *argv[])
{
  cout << "Ejercicio 02/02 Listas " << endl;

  Lista<int> lista;
  int n, d;

  cout << "Ingrese el tamaño de la Lista: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Ingrese el valor de la lista en la posicion: " << i << endl;
    cin >> d;
    lista.insertarUltimo(d);
  }

  cout << "Ingrese el valor que desea borrar de la lista: ";
  cin >> d;

  cout << "Lista original: ";
  lista.print();

  borrarElemento(lista, d);

  cout << "Lista modificada: ";
  for (int i = 0; i < lista.getTamanio(); i++)
  {
    cout << lista.getDato(i) << "->";
  }
  cout << "NULL" << endl;

  return 0;
}

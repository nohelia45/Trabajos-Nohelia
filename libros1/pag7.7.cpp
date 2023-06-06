#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // Definir el array de números
  int numeros[] = {4, 7, 1, 3, 5, 2, 0, 6, 9, 7, 3, 1, 2, 6, 4};

  // Calcular la longitud del array
  int longitud = sizeof(numeros) / sizeof(numeros[0]);

  // Ordenar el array en orden descendente
  sort(numeros, numeros + longitud, greater<int>());

  // Visualizar el array ordenado
  cout << "El array ordenado en orden descendente es:" << endl;
  for (int i = 0; i < longitud; i++) {
    cout << numeros[i] << " ";
  }
  cout << endl;

  return 0;
}
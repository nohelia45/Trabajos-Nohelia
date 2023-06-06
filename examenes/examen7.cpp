#include <iostream>
using namespace std;

int main() {
    const int filas = 4, columnas = 4; // Tamaño del arreglo
    int arreglo[filas][columnas] = { {4, 2, 3, 1},
                                     {7, 8, 5, 6},
                                     {1, 9, 2, 3},
                                     {5, 3, 7, 4} };

    // Buscamos el número mayor de cada columna e imprimimos su valor

    for (int j = 0; j < columnas; j++) {
        int mayor = arreglo[0][j];
        for (int i = 0; i < filas; i++) {
            if (arreglo[i][j] > mayor) {
                mayor = arreglo[i][j];
            }
        }
        cout << "El mayor Numero de la Columna " << j << " es: " << mayor << endl;
    }

    return 0;
}
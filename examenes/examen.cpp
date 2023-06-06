#include <iostream>
using namespace std;

int main() {
    const int n = 4; // Tamaño del array
    int numeros[n]; // Declaración del array
    int mayor = 0, menor = 0;

    for (int i = 0; i < n; i++) {
        cout << "Introduzca el numero " << i+1 << ": ";
        cin >> numeros[i];
    }

    // Encuentra el número mayor
    for (int i = 0; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    // Encuentra el número menor
    menor = mayor;
    for (int i = 0; i < n; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    cout << "El doble del mayor es: " << mayor * 2 << endl;
    cout << "El menor incrementado en 2 es: " << menor + 2 << endl;

    return 0;
}
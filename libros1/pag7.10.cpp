#include <iostream>

using namespace std;

int main() {
    int num = 2;
    int cantidad = 0;

    cout << "Los primeros 100 números primos son:" << endl;

    while (cantidad < 100) {
        bool es_primo = true;

        // verificar si el número es primo
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                es_primo = false;
                break;
            }
        }

        // si es primo, imprimirlo y contar la cantidad
        if (es_primo) {
            cout << num << " ";
            cantidad++;
        }

        num++;
    }

    return 0;
}
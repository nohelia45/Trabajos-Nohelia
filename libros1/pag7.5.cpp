#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;
    int suma = 0;

    // leer los numeros y almacenarlos en un vector
    for (int i = 0; i < 10; i++) {
        int num;
        cout << "Ingrese un número entero: ";
        cin >> num;
        numeros.push_back(num);
        suma += num;
    }

    // calcular la media aritmética
    float media = (float)suma / 10;

    // imprimir la suma y la media
    cout << "La suma de los números es: " << suma << endl;
    cout << "La media aritmética de los números es: " << media << endl;

    return 0;
}
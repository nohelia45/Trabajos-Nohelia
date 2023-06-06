#include <iostream>

using namespace std;

int main() {
    float promedio, distancia, ingresos;

    cout << " ingrese el promedio del estudiante: ";
    cin >> promedio;
    cout <<" ingrese la distancia de su domicilio al instituto (en km):";

    cin >> distancia;
    cout << "ingrese los ingresos familiares (en soles):";
    cin >> ingresos;

    if (promedio >18 || distancia > 40 || ingresos >700) {

        cout << " el estudiante es elegible para la beca" << endl;
    } else {
        cout << " el estudiante no es elegible para la beca" << endl;
    }

      return 0;
}
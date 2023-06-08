#include <iostream>
#include <string>

using namespace std;

double calcularpreciototal(char ubicacion, int cantidad, int vip, string bebida) {
    double precioentrada;
    switch (ubicacion) {
        case '1':
            precioentrada = 50.00;
            break;
        case '2':
            precioentrada = 80.00;
            break;
        case '3':
            precioentrada = 120.00;
            break;
        case '4':
            precioentrada = 160.00;
            break;
        default:
            cout << "Ubicación inválida." << endl;
            return 0.0;
    }
    if (cantidad >= 4) {
        precioentrada *= 0.8;
    }
    if (vip && (bebida == "gaseosa"|| bebida == "cerveza"|| bebida == "agua")){
        switch (bebida[0]) {
            case 'g':
                precioentrada += 5.00;
                break;
            case 'c':
                precioentrada += 8.00;
                break;
            case 'a':
                precioentrada += 3.00;
                break;
            default:
                cout << "Bebida inválida." << endl;
                return 0.0;
        }
    }
    return precioentrada * cantidad;
}

int main() {
    char ubicacion;
    int cantidad, vip;
    string bebida;

    cout << "Ingrese la ubicación (1-4): ";
    cin >> ubicacion;

    cout << "Ingrese la cantidad de entradas: ";
    cin >> cantidad;

    cout << "¿Es cliente VIP? (1 para sí, 0 para no): ";
    cin >> vip;

    cout << "¿Qué bebida desea? (gaseosa, cerveza o agua): ";
    cin >> bebida;

    double precio_total = calcularpreciototal(ubicacion, cantidad, vip, bebida);

    if (precio_total > 0.0) {
        cout << "El precio total es: $" << precio_total << endl;
    }

    return 0;
} // MODIFIQUE EL EJERCICIO PARA EL CASO QUE SI LA SUMA DE LAS ENTRADAS GERERALES SUPERA LOS 400 SE LES DARA UN DESCUENTO DEL 20% EN LA SIGUIENTE FUNCION

#include <iostream>
#include <cmath> // Biblioteca para la función pow()

int main() {
    int opcion;
    float num1, num2, resultado;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    std::cout << "Seleccione la operación a realizar:\n";
    std::cout << "1. Suma\n";
    std::cout << "2. Resta\n";
    std::cout << "3. División\n";
    std::cout << "4. Multiplicación\n";
    std::cout << "5. Potencia\n";
    std::cout << "Opción: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1: // Suma
            resultado = num1 + num2;
            std::cout << "El resultado de la suma es: " << resultado << std::endl;
            break;
        case 2: // Resta
            resultado = num1 - num2;
            std::cout << "El resultado de la resta es: " << resultado << std::endl;
            break;
        case 3: // División
            if (num2 != 0) {
                resultado = num1 / num2;
                std::cout << "El resultado de la división es: " << resultado << std::endl;
            } else {
                std::cout << "Error: No se puede dividir entre cero." << std::endl;
            }
            break;
        case 4: // Multiplicación
            resultado = num1 * num2;
            std::cout << "El resultado de la multiplicación es: " << resultado << std::endl;
            break;
        case 5: // Potencia
            resultado = pow(num1, num2);
            std::cout << "El resultado de la potencia es: " << resultado << std::endl;
            break;
        default:
            std::cout << "Opción inválida." << std::endl;
            break;
    }

    return 0;
}
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
float a, b, c, d, e, f, denominador, x, y;
cout << " Introduzca el valor de a de b y de c ";
cin >> a >> b >> c;cout << " Introduzca el valor de d de e y de f " ;
cin >> d >> e >> f;
denominador = a * e * b * d; // Modificado calculo del denominador
if (denominador == 0)
cout << " no solucion\n";
else
{
x = (c * e - b * f) / denominador;
  if (x > 2){ // Modificado en el calculo del Y
y = pow((a * f - c * d),2);
} else { 
    y = (a * f - c * d) - 2;
  }
cout << " la solucion del sistema es\n";
cout << " x = " << x << " y = " << y << endl;
}
} 
// MODIFICAR EL EJERCICIO PARA EL CASO QUE SI EL RESULTADO DE "X" ES MAYOR QUE 2, EL RESULTADO DE "Y", DEBERA SER ELEVADO AL CUADRADO, CASO CONTRARIO SE LE RESTARA 2 A "Y"

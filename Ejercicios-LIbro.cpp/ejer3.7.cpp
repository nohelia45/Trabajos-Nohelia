#include <iostream>

 using namespace std;

 int main (){
    int hm, dam, m;
    cout << "introduzca la longitud del perimetro hm dam m:";
    cin >> hm >> dam >> m;
    int longitud_m = hm * 10000 + dam * 100 + m;
    int longitud_dm = longitud_m * 10;
    cout << "perimetro en dm:" <<longitud_dm <<endl;

    return 0;
 }
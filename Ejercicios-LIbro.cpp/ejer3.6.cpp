#include <iostream>
#include <cmath> 

using namespace std;

int main(){
     double feet;
     cout << "introduzca pies:\n ";
      cin >> feet;
      double Yarda = feet / 3;
      double pulgadas = feet * 12;
      double cm = pulgadas * 2.54;
      double metros = cm / 100;
      double Pies_Pulgadas = pulgadas / 12; // AGREGADO

      cout <<"equivalentes:"<<endl;
      cout <<"Yardas: "<<Yarda<<endl;
      cout <<"pies: "<<feet<<endl;
      cout <<"pulgadas: "<<pulgadas<<endl;
      cout <<"centimetros: "<<cm<<endl;
      cout <<"Pulgadas A pies: " << Pies_Pulgadas << endl; // conversion de PULGADAS A PIES

      return 0;
} // TRANSFORMAR PULGADAS A PIES

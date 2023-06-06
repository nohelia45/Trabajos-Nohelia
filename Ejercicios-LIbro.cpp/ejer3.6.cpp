#include <iostream>
#include <cmath> 

using namespace std;

int main(){
     double feet;
     cout << "introduzca pies:\n ";
      cin >> feet;
      double patios = feet / 3;
      double pulgadas = feet * 12;
      double cm = pulgadas * 2.54;
      double metros = cm / 100;

      cout <<"equivalentes:"<<endl;
      cout <<"patios:"<<feet<<endl;
      cout <<"pies:"<<feet<<endl;
      cout <<"pulgadas:"<<pulgadas<<endl;
      cout <<"centimetros:"<<cm<<endl;

      return 0;
}

#include <iostream>
#include <cmath> 

using namespace std;

int main(){
    
    double m, C = 2.997925e10;
    cout <<"introduzca masa\n ";
    cin >> m;
    double E = m * pow(C ,2) *1e-7;

    //convertir energia en ergs
    cout <<"energia en ergios: "<<E<<"ergs"<<endl;
    

     return 0;
}
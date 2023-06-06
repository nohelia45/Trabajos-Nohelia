#include <iostream>
#include <string>

using namespace std;

struct libro {
    string titulo;
    string autor;
};

int main() {
    libro libros[8];
    int numlibros = 0;

    while (numlibros < 8){
        cout << "ingrese el titulo del libro #"
             << numlibros+1  <<": ";
             getline(cin,libros[numlibros]. titulo);
        cout << "ingrese el autor del libro #"
             << numlibros+1  <<": ";
             getline(cin,libros[numlibros]. autor);

               numlibros++;

             cout << endl;    
    }
    cout <<"los libros almacenados son:" << endl;
    for (int i = 0; i <numlibros; i++){
        cout <<"-"<<
        libros[i].titulo <<"(" <<
        libros[i]. autor <<")" << endl;
    }
    return 0;
     
}

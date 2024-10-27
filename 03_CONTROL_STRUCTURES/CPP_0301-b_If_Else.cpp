#include <iostream>
using namespace std;

int main() {


    // Se van a regalar utiles escolares, si la persona está estudiando o está trabajando, puede solicitar los útiles.

    bool is_studying = false;
    bool is_working = false;

    // || alguna de las pruebas puede ser verdadera
    if( is_studying == true || is_working == true ) {
        cout << "Puedes solicitar la beca" << endl;
    }
    else {
        cout << "No Puedes solicitar la beca" << endl;
    }


    return 0;
}

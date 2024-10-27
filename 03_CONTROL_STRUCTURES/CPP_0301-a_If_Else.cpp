#include <iostream>
using namespace std;

int main() {

    // Si un niño o niña tiene una edad mayor de 8 y menor de 12 años, puede entrar al carrusel
    // if( age > min_age && age < max_age )

    // Si un niño o niña tiene una edad mayor de 8 y hasta 12 años, puede entrar al carrusel
    // if( age > min_age && age <= max_age )

    // Si un niño o niña tiene una edad entre 8 y 12 años, puede entrar al carrusel
    int age = 13;
    int min_age = 8;
    int max_age = 12;

    // && todas las pruebas deben ser verdaderas
    if( age >= min_age && age <= max_age ) {
        cout << "Puedes entrar al carrusel" << endl;
    }
    else {
        cout << "No Puedes entrar al carrusel" << endl;
    }


    return 0;
}

#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;

int main() {

    Persona cuenta;
    
    string nombre;
    int edad;
    string genero;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cuenta.setName(nombre);

    cout << "Ingrese su edad: "; cin >> edad;
    cuenta.setAge(edad);

    cout << "Ingrese su género: "; cin >> genero;
    cuenta.setGender(genero);

    cout << "El nombre de la cuenta es: " << cuenta.getName() << endl;
    cout << "La edad ingresada es: " << cuenta.getAge() << endl;
    cout << "El género ingresado es: " << cuenta.getGender();
    
    return 0;

}
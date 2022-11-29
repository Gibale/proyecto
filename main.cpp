#include <iostream>
#include <string>
#include "Persona.h"
#include "Empleado.h"

using namespace std;

int main() {

    string Puesto;

    Persona cuenta;
    
    string nombre;
    int edad;
    string genero;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cuenta.setName(nombre);

    cout << "Ingrese su edad: "; cin >> edad;
    cuenta.setAge(edad);

    cout << "Ingrese su género: ";
    getline(cin, genero);
    cuenta.setGender(genero);

    cout << "El nombre de la cuenta es: " << cuenta.getName() << endl;
    cout << "La edad ingresada es: " << cuenta.getAge() << endl;
    cout << "El género ingresado es: " << cuenta.getGender() << endl;

    cout << "Indique si es empleado o jefe: " << endl;

    return 0;

}

#include "Persona.h"
#include <string>

using namespace std;

class Empleado : public Persona{

    private:
        float sueldo;
    public:
        Empleado(string, int, float);
        void mostrarEmpleado();

        void setSalary(float accSalary){

            sueldo = accSalary;

        }

        float getSalary(){

            return sueldo;

        }

};

void Empleado::mostrarEmpleado(){
    getName();
    getAge();
    getGender();
    getSalary();

    

}


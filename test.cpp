#include <iostream>
#include <string>

using namespace std;

class Person{

    private:
        string name;
        int edad;
    
    public:
        Person(string, int);
        void showPerson();

};

class Employee : public Person{
    private:
        float sueldo;
    public:
        Employee(string, int, float);
        void showEmployee();
};

Person::Person(string _name, int _edad){
    name = _name;
    edad = _edad;

};

void Person::showPerson(){
    cout << "Nombre: " << name << endl;
    cout << "Edad: " << edad << endl;

}

Employee::Employee(string _name, int _edad, float _sueldo):Person(_name, _edad){
    sueldo = _sueldo;

    };

void Employee::showEmployee(){
    Person::showPerson();
    cout << "Sueldo: " << sueldo << endl;
}






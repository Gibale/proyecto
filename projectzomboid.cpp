#include <iostream>
#include <string>

using namespace std;

class Employee {

    string Name;
    int horas = 0;
    int horasE = 0;
    int total = 0;

    public:
        string getName(){
            return Name;
        }
        void setName(string newName){
            Name = newName;
        }

        void getHours(){
            cout << "Ingrese las horas trabajadas: "; cin >> horas;
        }
        void setHours(int newHours){
            
        }

};

int main() {

   string password; 
   cout << "Ingrese su contraseña: "; cin >> password;

   if (password == E123){

    
   }

}
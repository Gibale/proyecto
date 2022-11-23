#include <string>

using namespace std;

class Persona {

    private:
        string name;
        int age;
        string gender;

    public:

    void setName(string accName){

            name = accName;
        }
        
        string getName(){

            return name;
        }

        void setAge(int accAge){

            age = accAge;
        }

        int getAge(){

            return age;
        }

    void setGender(string accGender) {

        gender = accGender;

    }

    string getGender() {
        
        return gender;
    }
        
};
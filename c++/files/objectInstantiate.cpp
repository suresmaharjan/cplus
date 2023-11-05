#include <iostream>
using namespace std;

class Animal{
    public :
        string shelter;
        Animal(string aNshelter){
            shelter=aNshelter ;
        }
};

class Dog : Animal{
public:
    Dog(string home){
        shelter = home;
    }
}

int main(){
    Dog dog("stable");
    cout << dog.shelter;
    
    return 0;
}
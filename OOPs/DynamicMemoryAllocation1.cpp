#include<iostream>
using namespace std;


class Animal{

    //state or properties
    public:
    int age;
    string type;


    //behaviour or functions or methods
    void eat(){
        cout<<"eating"<<endl;

    }

    void sleep(){
        cout<<"sleeping"<<endl;

    }


};

int main(){
    //object creation
    //two ways---> static and dynamic

    //static
    //in class1 


    //dynamic
    //pointer sweta stores the address
    Animal* sweta = new Animal;

    //accessing the pointer value
    //1st way
    (*sweta).age = 20;
    (*sweta).type = "human";
 
    //alternate way 
    sweta->age = 20;
    sweta->type = "human";


    
    //calling function
    sweta->eat();
    sweta->sleep();





    return 0;
}
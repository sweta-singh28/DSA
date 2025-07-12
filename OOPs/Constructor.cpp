#include<iostream>
using namespace std;

class Animal{
    
    private:
    int weight;


    public:      
    int age;
    string name;

    //default Constructor
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout<<"Constructor is called."<<endl;
    }
 

    //Parametrised Constructor
    Animal(int age){
        this->age = age;
        cout<<"Parameterized Constructor called."<<endl;
    }
    
    //passing 2 parameters
    Animal(int age, int weight){
        this->age = age;
        this->weight = weight;
        cout<<"Parameterized Constructor  2 called."<<endl;
    }
    
    //Passing 3 parameters
    Animal(int age, int weight, string name){
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout<<"Parameterized Constructor 3 called."<<endl;
    }

    //Copy Constructor
    Animal(Animal &obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout<<"I am inside copy constructor "<<endl;

        
    }

    //behaviour   (functions in c++ and methods in java)
    void eat(){
        cout<<"eating"<<endl;

    }

    void sleep(){
        cout<<"sleeping"<<endl;

    }


    //getters and setters
    //getters----> helps to access private attribute from a class (fetch the property)

    int getWeight(){
        return weight;
    }

    //setters----> helps to set the values to private attributes in a class  (set the property)
    void setWeight(int w){
        weight = w;
    }
    
    void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->name<<endl;
    }
};

int main(){
    //Animal a(20);   //static way
    //Animal* b = new Animal(18,48,"Gungun");    //Dynamic way

    //object copy
   // Animal c = a;
    //Animal animal1(c);
    

    Animal a;
    a.age = 20;
    a.setWeight(101);
    a.name = "gungun";

    Animal b = a;

    a.print();
    b.print();

    //change in value
    a.name[0] = 'T';
    a.print();

    return 0;
}
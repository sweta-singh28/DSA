#include<iostream>
using namespace std;
//this keyword---> this is a pointer to current object


class Animal{
    
    //state or properties
    private:
    int weight;

    public:
    int age;
    string type;

    
    //constructor
    //default constructor
    //when you called an object the constructor is created by default
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout<<"Constructor called. "<<endl;
    }

    //parameterized constructor
    Animal(int age){
        this->age = 0;
        cout<<" Parameterized Constructor called. "<<endl;
    }




    //behaviour or functions or methods
    void eat(){
        cout<<"eating"<<endl;

    }
    void sleep(){
        cout<<"sleeping"<<endl;

    }


    //getters---> to fetch weight
    int getweight(){
        return weight;
    }
    //setters---> to set weight
    int setweight(int weight){
        this->weight = weight;
    }
    


};

int main(){
    //in both way the constructor is called

    //static
    Animal a(10);
    //dynamic
    Animal* b = new Animal(20);







    return 0;
}
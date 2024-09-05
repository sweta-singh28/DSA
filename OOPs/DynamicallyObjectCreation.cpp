#include<iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    //override
    void speak(){
        cout<<"Barking"<<endl;
    }
};



int main(){
    //Animal* a = new Animal();
    //a->speak();    //it will print speaking

    //Dog* b = new Dog();
    //b->bark();     //it will print barking

    
    //Upcasting
    //jab pointer parent class type ka ho or object humesha child calss ak ho then function call humesha parent class ka hoga
    Animal* a = new Dog();     //pointer parent class ka h and object child class ka h
    a->speak();               //it will print speaking (default)   mark virtual to parent class if you want to call the function of child class

  

   //DownCasting
   //jab pointer child class type ka ho or object humesha parent class ka ho then function call humesha parent class ka hoga
   //(inshort humesha pointer type ka function call hoga without using virtual keyword)
   Dog* b = (Dog*)new Animal();
   b->speak();

   
    return 0;
}
#include<iostream>
using namespace std;
//Overriding
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    //override
    void bark(){
        cout<<"Barking"<<endl;
    }
};



int main(){
    Animal a;
    a.speak();  
    
    Dog b;
    b.bark();

    return 0;
}
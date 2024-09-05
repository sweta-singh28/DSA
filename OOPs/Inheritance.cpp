#include<iostream>
//it allows a subclass or child class to inherit properties and behaviour from parent or base class     
using namespace std;

//Parent class 
class Animal {
    public:
    int age;
    int weight;


    void eat(){
        cout<<"Eating"<<endl;
    }
};

//Child class
class Dog:public Animal{

};






int main(){

    Dog d1;
    d1.eat();



    return 0;
}
#include<iostream>
using namespace std;

class Animal {
        protected:
        int age;

};

class Dog:public Animal{
    public: 
    void print(){
        cout<<this->age;
    }
};



int main(){
    Dog d1;
    //cout<<d1.age; //age is protected we cannot access it
    

    d1.print();




    return 0;
}
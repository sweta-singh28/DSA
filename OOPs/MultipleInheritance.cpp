#include<iostream>
using namespace std; 

class A{
    public:
    //scope resolution
    int chemistry;
    A() {
        chemistry = 98;
    }

};

class B{
    public:
    int chemistry;
    B() {
        chemistry = 100;
    }

};

class C: public A, public B{
    public:
    int maths;

};



int main(){ 

    //create object of c class
    C obj; 
    //cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.maths<<endl;
    cout<<" "<<obj.A::chemistry<<" "<<obj.maths<<endl;

    return 0;
}
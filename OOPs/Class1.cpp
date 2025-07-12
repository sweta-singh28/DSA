#include<iostream>
using namespace std;


class Animal{

    //state or properties
    public:
    int age;
    string name;


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
    Animal sweta;
    sweta.age = 20;
    sweta.name = "gungun";
    //when we want to access any object's property then we use dot operator
    cout<<"Age of sweta: "<<sweta.age<<endl;
    cout<<"Name: "<<sweta.name<<endl;

    //calling function 
    sweta.eat();
    sweta.sleep();


    //dynamic



    return 0;
}
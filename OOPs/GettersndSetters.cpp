#include<iostream>
using namespace std;


class Animal{
    
    //state or properties
    private:
    int weight;


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

    //getters---> to fetch weight
    int getweight(){
        return weight;
    }

    //setters---> to set weight
    int setweight(int w){
        weight = w;
    }


};

int main(){
    //object creation
    //two ways---> static and dynamic

    //static
    Animal sweta;


    sweta.age = 20;
    sweta.name = "gungun";

    //accessing public member
    cout<<"Age is: "<<sweta.age<<endl;

    //tring to access private member(it will show error)    (So we will use getters and setters)
    //cout<<"Weight: "<<sweta.weight<<endl;
    //correct way
    //calling the setter to set weight
    sweta.setweight(48);
    cout<<"Weight: "<<sweta.getweight()<<endl;

    

    //calling function 
    sweta.eat();
    sweta.sleep();


    //dynamic



    return 0;
}
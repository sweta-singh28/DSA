#include<iostream>
using namespace std;
//this keyword---> this is a pointer to current object


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
    int setweight(int weight){
        //here we can be confuse ki kon wale weight ki baat ho rhi, property weight jo class k ander defined h yaa fir function m jo parameter paas kr rhe uski so will use this key word jo ki ek pointer h or current ibject ko point kregi
       //now we can differentiate the class wali weight nd input parameter weight
        this->weight = weight;
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
#include<iostream>
using namespace std;

class Animal{
    //state or properties
    //private     //data is private
    private:
    int weight;


    public:       //now the data is public
    int age;
    string name;


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

};

int main(){
    //object creation ---->two ways

    //static memory allocation
    Animal sweta;      //Animal type ka object h jiska name h sweta
    sweta.age = 20;
    sweta.name = "tiger";
    //want to access the age of sweta   (to access teh property of an object we use . operator)
    cout<<"age of sweta is: "<<sweta.age <<endl;
    //want to access the name
    cout<<"name is: "<<sweta.name<<endl;

    //function calling
    sweta.eat();
    sweta.sleep();


    //want to access the weight(private data/members) using getters and setters
    //set weight
    sweta.setWeight(48);
    //printing the weight (get weight)
    cout<<"Weight: "<<sweta.getWeight()<<endl;


    //Object creation
    //dynamic memory allocation  
    Animal* gungun = new Animal;

    (*gungun).age = 15;
    (*gungun).name = "hooman";

    //Alternate  - dynamic
    gungun->age=17;
    gungun->name="chhotu";

    gungun->eat();
    gungun->sleep();





    








    //Access modifiers 3 types in c++
    //public---> if a property or behaviour is public marked then we can access it inside the class and outside the class
    //private----> can access inside the class but not outside , by default all the properties are private
    //protected----> 

    return 0;
}
#include<iostream>
using namespace std;

class Animal{
    
    private:
    int weight;


    public:      
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
    
    void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->name<<endl;
    }
    
    ~Animal(){
        cout<<"I am inside The Destructor"<<endl;
    }
};

int main(){
   

    //static
    cout<<"a obj creation"<<endl;
    Animal a;
    a.age = 5;

    //Dynamic or heap
    cout<<"b obj created"<<endl;
    Animal* b = new Animal();
    b->age = 12;

    //delete manually
    delete b;

    return 0;
}
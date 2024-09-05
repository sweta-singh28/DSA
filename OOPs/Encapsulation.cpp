#include<iostream>
using namespace std;

//data is encapsulated inside the Animal   (hide the data)
class Animal {
        private:    
            int age;
            int weight;


        public:
            void eat(){
                cout<<"Eating"<<endl;
            }


           //create getters and setters to access the private data

           int getAge(){
                    return this->age;
           }

           int setAge(int age){
                     this->age = age;
           }

            

};

int main(){

    return 0;
}
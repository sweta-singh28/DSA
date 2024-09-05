#include<iostream>
using namespace std;
class Car{
        public:
        string name;
        int age;
        int weight;


        void speedUp(){
            cout<<"Speeding up"<<endl;
        }

        void breakUp(){
            cout<<"break"<<endl;

        }
};


class Scorpio:public Car {

};


int main(){
    
    Scorpio swetaki;
    swetaki.speedUp();

    return 0;
}
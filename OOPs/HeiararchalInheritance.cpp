#include<iostream>
using namespace std;
 class Car{
    public:
    int age;
    int weight;
    string name;
    

    void speedUp(){
        cout<<"Speeding up"<<endl;
    }
 };

 class scorpio:public Car{

 };


class forTunner: public Car{

};

int main(){
    scorpio s11;
    s11.speedUp();

    return 0;
}
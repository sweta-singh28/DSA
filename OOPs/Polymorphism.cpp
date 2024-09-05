#include<iostream>
using namespace std;

//Function overloading
class Maths{
    public:
    int sum(int a, int b){
        cout<<"i am First signature"<<endl;
        return a+b;
    }
    //another function with same name but signatures are different
    int sum(int a, int b, int c){
        cout<<"i am second signature"<<endl;
        return a+b+c;
    }
    int sum(int a, float b){
        cout<<"i am third signature"<<endl;
        return a+b;

    }
};
int main(){
    Maths obj;
    cout<<obj.sum(2,4)<<endl;


    return 0;
}
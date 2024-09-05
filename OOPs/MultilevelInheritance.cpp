#include<iostream>
using namespace std;
class Fruits{
       public: 
       string name;
};

class Mango:public Fruits{
       public: 
       int weight;

};

class Alphonso:public Mango{
       public:
       int sugarLevel;
};

int main(){
    Alphonso a;
    cout<<a.name<<" "<<a.weight<<" "<<a.sugarLevel<<endl;

    return 0;
}
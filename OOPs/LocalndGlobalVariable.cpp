#include<iostream>
using namespace std;
int x = 2;   //GLOBAL VARIABLE
int main(){

    x= 4;    //accessing global variable
    int x= 20;   //local to main() fn.
    cout<<x<<endl;

    cout<< ::x<<endl;   //accessing Global with it

    {
        int x = 10;
        cout<<x<<endl;
        cout<<::x<<endl;
    }


    



    return 0;
}
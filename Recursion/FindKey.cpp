#include<iostream>
#include<string>
#include<string.h>
using namespace std;

bool checkKey(string str, int i, int n, char key){
    //base case
    if(i>=n){
        return false;
    }

    //solve 1 case
    if(str[i] == key){
        return true;
    }

    //recursive call
    return checkKey(str, i+1, n, key);


}


int main(){
    string str = "swetaa";
    int n = str.length();
    int i = 0;

    char key = 'y';

    if(checkKey(str, i, n, key) != 1){
        cout<<"Key is not present"<<endl;
    }
    else{
        cout<<"Key is present"<<endl;
    }




    return 0;
}
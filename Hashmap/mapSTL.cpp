#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string, int>m;

    //insertion
    //1st way
    pair<string, int>p = make_pair("Sweta", 20);
    m.insert(p);

    //2nd way
    pair<string, int>pair2("sweta2", 20);

    //3rd way
    m["mera"] = 1;



    return 0;
}
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    //creation
    unordered_map<string, int>m;

    //insertion
    
    //1.
    pair<string, int> p = make_pair("sweta", 2);
    m.insert(p);

    //2.
    pair<string, int>pair("name", 1);
    m.insert(pair);

    //3.
    m["mera"] = 1;
    m["mera"] = 2;        //updation 

 

    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("sweta")<<endl;


    // cout<<m.at("unkownKey")<<endl;    //out of range error

    cout<<m["unknownKey"]<<endl;     //creates an entry with 0
    cout<<m.at("unknownKey")<<endl;    


    //size()
    cout<<m.size()<<endl;

    //to check presence 
    cout<<m.count("sweta")<<endl;

    //erase()
    m.erase("sweta");
    cout<<m.size()<<endl;

    //printing all the element in table
    //1.
    //first->key
    //second->value
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }


    //2. using iterators 
    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }




    return 0;
}
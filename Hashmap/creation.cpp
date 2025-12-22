#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string, int>m;


    //insertion
    pair<string, int>p = make_pair("Scorpio", 5);
    m.insert(p);

    pair<string, int>p2("alto", 1);
    m.insert(p2);

    m["fortuner"] = 10;


    //access
    cout<<m.at("alto")<<endl;
    cout<<m.at("Scorpio")<<endl;
    cout<<m["fortuner"]<<endl;

    //search using count function
    cout<<m.count("Scorpio")<<endl;
    cout<<m.count("Inova")<<endl;

    //find()
    if(m.find("fortuner") != m.end()){
        cout<<"Fortuner found"<<endl;
    }
    else{
        cout<<"Fortuner not found"<<endl;
    }

    //printing size using size()
    cout<<m.size();  //3 entries
    cout<<m["hummer"]<<endl; //trying to access hummer so 1st it  will create a new entry in table nd mapped it with 0 (unknown key)
    cout<<m.size()<<endl;   //4 entries   

    //iterate on map
    cout<<"Printing all entries of map: "<<endl;
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }



    return 0;
}
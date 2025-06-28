#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(char first, char second){
    return first>second;
}

bool compare(int a, int b){
    //a<b = for ascending order
    //a>b = for descending order 
    cout<<"First Number: "<<a;
    cout<<" Second Number: "<<b<<endl<<endl;
    return a>b;
}


int main() {
    string s = "sweta";
    
    //lexicographical order
    //it depends on sorting algo which two numbers will compared first
    sort(s.begin(), s.end(), cmp);
    cout<<s <<endl;
    
    vector<int>V{5,3,1,2,4};
    sort(V.begin(), V.end(), compare);
    for(int i=0; i<V.size(); i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}
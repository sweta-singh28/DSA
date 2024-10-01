#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>ab;
    ab.push(20);
    ab.push(30);
    ab.push(50);
    ab.push(80);

    while (!ab.empty())
    {
        cout<<ab.top()<<endl;
        ab.pop();

    }
    


    return 0;

}
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){

    vector<int>arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(3);

    stack<int>s;
    //by default push -1 in stack
    s.push(-1);

    vector<int>ans(arr.size());

    for(int i=arr.size()-1; i>=0; i--){
        int curr = arr[i];

        //keep removing the top element from the stack until we get an element that is smaller than the curr
        while(s.top() >= curr){
            s.pop();
        }
        //loop se bahar aagye mtlb chhota ans mil chuka h so store it in ans vector
        ans[i] = s.top();

        //push the current element
        s.push(curr);

    }

    cout<<"Printing"<<endl;

    for(int i=0; i<=ans.size()-1; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

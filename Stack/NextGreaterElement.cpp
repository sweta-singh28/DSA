#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {3, 10, 4, 2, 1, 2};
    stack<int> s;
    s.push(-1); 
    vector<int> ans(arr.size());

    for(int i = arr.size() - 1; i >= 0; i--){
        int curr = arr[i];

        // Remove elements smaller than or equal to current
        while(s.top() != -1 && s.top() <= curr){
            s.pop();
        }

        // Top is now the next greater (or -1 if none)
        ans[i] = s.top();
        s.push(curr);
    }

    cout << "Next Greater Elements on Right:\n";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

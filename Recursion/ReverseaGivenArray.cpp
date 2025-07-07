#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr, int start, int end) {
    // base case
    if (start >= end) return;

    // swap elements
    swap(arr[start], arr[end]);

    // recursive call
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    vector<int> arr{1,2,3,4,4,5,6,7};
    

    reverseArray(arr, 0, arr.size() - 1);

    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

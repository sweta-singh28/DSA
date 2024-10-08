#include<iostream>
#include<deque>

using namespace std;

void solve(int arr[], int n, int k) {
    deque<int> q;

    // Process first window of size k
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            q.push_back(i);
        }
    }


    // Processing remaining windows
    for (int i = k; i <= n; i++) {
        // Print the first negative number of the previous window
        if (!q.empty()) {
            cout << arr[q.front()] << " ";
        } else {
            cout << 0 << " ";
        }

        // Remove elements out of the current window
        if (!q.empty() && q.front() <= i - k) {
            q.pop_front();
        }

        // Check current element for insertion into deque
        if (i < n && arr[i] < 0) {
            q.push_back(i);
        }
    }
}


int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    solve(arr, size, k);

    return 0;
    
}

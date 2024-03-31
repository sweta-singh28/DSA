#include <iostream>
#include <vector>
using namespace std;

void findCommon(vector<int> a, vector<int> b, vector<int> c) {
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size() && k < c.size()) {
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << " ";
            i++;
            j++;
            k++;
        } else if (a[i] < b[j]) {
            i++;
        } else if (b[j] < c[k]) {
            j++;
        } else {
            k++;
        }
    }
}

int main() {
    vector<int> a = {1, 2, 10, 20, 40, 80};
    vector<int> b = {6, 7, 20, 80, 100};
    vector<int> c = {3, 4, 15, 20, 30, 70, 80, 120};

    cout << "The common elements are: ";
    findCommon(a, b, c);
    cout << endl;
    return 0;
}

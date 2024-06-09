#include <iostream>
using namespace std;

void transposeArray(int arr[][3], int rows, int cols, int transpose[][3]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // Taking input
    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the array: " << endl;
    printArray(arr, rows, cols);

    int transpose[3][3];
    transposeArray(arr, rows, cols, transpose);

    cout << "Printing the transposed array: " << endl;
    printArray(transpose, rows, cols);

    return 0;
}

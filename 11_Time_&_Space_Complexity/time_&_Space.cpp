#include <iostream>
#include <vector>
using namespace std;

// O(1) space - constant extra space
int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;  // Only one variable used
}

// O(n) space - linear extra space
int* duplicateArray(int arr[], int n) {
    int* newArr = new int[n];  // Allocates n integers
    for(int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }
    return newArr;  // O(n) space
}

// O(n²) space - quadratic extra space
vector<vector<int>> createMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));  // n x n matrix
    return matrix;  // O(n²) space
}

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Max value: " << findMax(arr, n) << endl;
    
    int* dup = duplicateArray(arr, n);
    cout << "Duplicated array: ";
    for(int i = 0; i < n; i++)
        cout << dup[i] << " ";
    cout << endl;
    delete[] dup;
    
    auto matrix = createMatrix(3);
    cout << "3x3 matrix created" << endl;
    
    return 0;
}
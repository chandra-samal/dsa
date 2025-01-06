#include <iostream>

using namespace std;

// Selection Sort: Select the smallest and replace it with the first element of the iteration 
void selectionSort(int arr[], int n){
    for (int i = 0; i<n; i++){
        int smallestNumberIndex = i;
        // cout << smallest << "\n";
        for (int j = i; j<n; j++){
            if (arr[j]<arr[smallestNumberIndex]) {
                smallestNumberIndex = j;
                // cout << smallest << "\n";
            }
        }
        // cout << arr[i] << " is being swapped with " << smallest << "\n"; 
        swap(arr[i], arr[smallestNumberIndex]);
    }
}

int main(){
    int n = 5;
    int arr[n] = {44, 23, 11, 2, 9};

    selectionSort(arr, n);

    for (auto itr:arr) cout << itr << " ";

    return 0;
}
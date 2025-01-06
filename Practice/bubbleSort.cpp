#include <bits/stdc++.h>
using namespace std;
// Bubble Sort, greatest goes to the last

void bubbleSort(int arr[], int n){
    // i goes from 0 --> 4
    for (int i = 0; i<n-1; i++){
        // j goes from 0 ---> 4-i
        for (int j = 0; j<n-1-i; j++){
            if (arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}

int main(){
    int n = 5;
    int arr[n] = {3, 56, 45, 69, 23};
    bubbleSort(arr, n);

    for (auto itr:arr){
        cout << itr << " ";
    }

    return 0;
}
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
    int n = 10;
    int arr[n] = {28004, 23544, 32504, 29493, 17013, 17850, 18952, 12089, 5126, 10353};
    bubbleSort(arr, n);

    for (auto itr:arr){
        cout << itr << " ";
    }

    return 0;
}
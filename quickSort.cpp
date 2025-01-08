// Quick Sort has a time complexity of O(NlogN)
// Quick Sort has a space complexity of O(1), as it does not uses a temporary array like the merge sort

#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j){
        while((arr[i]<=pivot) && (i<=high - 1)){
            i++;
        }
        while((arr[j]>pivot) && (j>=low + 1)){
            j--;
        }
        
        if (i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){
    
    if (low<high) {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }


}

int main(){
    // Pick up a pivot (any element can be the pivot) and place it in the correct order of the sorted array
    int n = 9;
    int arr[n] = {4, 6, 2, 5, 7, 9, 1, 3, 8};

    quickSort(arr, 0, n-1);

    for (auto itr:arr){
        cout << itr << " ";
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int> sortedArr;
    // We will use two pointers
    int left = low;
    int right = mid + 1;

    while ((left<=mid) && (right<=high)){
        if (arr[left]<arr[right]){
            sortedArr.emplace_back(arr[left]);
            left++;
        }
        else {
            sortedArr.emplace_back(arr[right]);
            right++;
        }
    }

    // still elements remaining on the left array
    while (left<=mid){
        sortedArr.emplace_back(arr[left]);
        left++;
    }
    // elements remaining on the right 
    while (right<=high){
        sortedArr.emplace_back(arr[right]);
        right++;
    }

    // heavy chiz
    for (int i = low; i<=high; i++){
        arr[i] = sortedArr[i-low];
    }

}

void mergeSort(int arr[], int low, int high){
    if (low>=high) return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n = 7;
    int arr[n] = {34, 56, 99, 22, 13, 45, 65};

    mergeSort(arr, 0, n-1);

    for (auto itr:arr){
        cout << itr << " ";
    }
    return 0;
}
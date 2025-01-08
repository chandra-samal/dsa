// The Time complexity of Merge Sort is O(NlogN), and the space Complexity is O(N)

#include <bits/stdc++.h>

// Merge Sort basically means Divide & Merge
// The Divided arrays are sorted and then when they are merged again
// They are merged in such a way that the merged array is also sorted.

using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    // For comparing and putting it
    while (left<=mid && right<=high){
        if (arr[left]<arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // If there's still elements left on the left or right
    while (left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(int arr[], int low, int high){
    if (low>=high) return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){

    int n = 9;
    int arr[n] = {3, 2, 4, 1, 5, 69, 78, 23, 11};
    // An array of size 9 can be divided as : 4|5 or 5|4, we use 5|4
    
    mergeSort(arr, 0, n-1);
    for (auto itr:arr){
        cout << itr << " ";
    }

    return 0;
}
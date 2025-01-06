#include <bits/stdc++.h>

using namespace std;

// In insertion we sort the array stepwise, as we move on further indexes, we sort the covered part of the array, and then go on to the next index.

int main(){
    int n = 7;
    int arr[n] = {14, 9, 15, 12, 6, 8, 13};

    // starting with the 1st index
    for (int i = 1; i < n; i++){
        int c = i;
        while ((arr[c-1] > arr[c]) && (c!=0)){
            swap(arr[c-1], arr[c]);
            c--;
        }
    }
    
    for (auto itr:arr){
        cout << itr << " ";
    }



    return 0;
}
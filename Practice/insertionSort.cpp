#include <bits/stdc++.h>

using namespace std;


int main(){
    int n = 5;
    int arr[n] = {3, 54, 12, 11, 9};

    for (int i = 0; i<n; i++){
        int c = i;
        while ((arr[c-1]>arr[c])&&(c!=0)){
            swap(arr[c-1], arr[c]);
            c--;
        }
    }

    for (auto itr:arr){
        cout << itr << " ";
    }

    return 0;
}
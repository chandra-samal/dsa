#include <bits/stdc++.h>

/*
Bubble Sort means pushing the greater term to the right most side 
and doing it again and again by excluding the last terms 
*/

using namespace std;

int main(){
    int n = 6;
    int myArr[n] = {13, 46, 24, 52, 20, 9};

    // The complexity through this wil come out to be n^2
    for (int j = 0; j < n - 1; j++){
        int didSwap = 0;    
        // didSwap is optional, and is only added to improve the time complexity in certain cases
        for (int i = 0; i < n - 1 - j; i++){
            if (myArr[i] > myArr[i+1]) swap(myArr[i], myArr[i+1]);
            didSwap = 1;
        }
        if (didSwap == 0) break;
    }

    for (auto itr:myArr){
        cout << itr << " ";
    }
    
    return 0;
}
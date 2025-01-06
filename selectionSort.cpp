#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    vector<int> myArr = {22, 3, 17, 4, 62};

    for (int i = 0; i < n-1; i++){
        int minIndex = i;

        // Finding the minimum
        for (int j = i; j < n; j++){
            if (myArr[j]<myArr[minIndex]) minIndex = j;  
        }
        swap(myArr[i], myArr[minIndex]);
        // Found the minimum and swapped it   
    }

    // Printing the swapped array
    for (auto itr:myArr){
        cout << itr << " ";
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr = {24, 4, 79, 5};

    for (int i = 0; i<arr.size(); i++){
        int minIndex = i;
        for (int j = i; j<arr.size(); j++){
            if (arr[j]<arr[minIndex]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    ;}

    for (auto itr:arr){
        cout << itr << " ";
    }


    return 0;
}
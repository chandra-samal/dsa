#include <bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> rearrangedArray;
    int n = nums.size();
    // trying the most brute-force method

    vector<int> positiveElements;
    vector<int> negativeElements;
    for (int i = 0; i<n; i++){
        if (nums[i]>0) positiveElements.emplace_back(nums[i]);
        else negativeElements.emplace_back(nums[i]);
    }

    int i = 0;
    while (i<n){
        if (i%2==0){
            rearrangedArray.emplace_back(positiveElements[i/2]);
        }
        else rearrangedArray.emplace_back(negativeElements[i/2]);
        i++;
    }

    return rearrangedArray;
        
}

int main(){

    vector<int> nums = {3, 2, 1, -1, -3, -2};
    vector<int> rearrangedArray = rearrangeArray(nums);
    for (auto itr:rearrangedArray){
        cout << itr << " ";
    }

    cout << "\n";

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int>& nums){
    map<int, int> mpp;
    int n = nums.size();
    for (int i = 0; i<n; i++){
        if (mpp.find(nums[i]) != mpp.end()){
            mpp[nums[i]]++;
        }
        else mpp[nums[i]] = 1;
    }
    for (int i = 0; i<n; i++){
        if (mpp[nums[i]]>n/2) return nums[i];
    }
    return -1;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums);

    
    return 0;
}
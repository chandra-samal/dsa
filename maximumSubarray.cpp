#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int>& nums){
    long long sum = 0;
    long long max = INT_MIN;

    for (int i = 0; i<nums.size(); i++){
        if (sum<0) sum = 0;
        sum += nums[i];
        if (sum>max) max = sum;
    }
    return max;
}

int main(){
    vector<int> nums = {2, 1, -2, 9};

    cout << maxSubArray(nums) << "\n";

    return 0;
}
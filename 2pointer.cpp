#include <bits/stdc++.h>

using namespace std;

int main(){
    // This uses the optimal solution that is the two pointer approach

    // given array
    vector<int> nums = {2, 6, 11, 5, 8};
    // first we will sort it
    sort(nums.begin(), nums.end());

    int target;
    cin >> target;
    bool isPossible = false;

    int n = nums.size();
    int i = 0;
    int j = n-1;

    while (j>i){
        int sum = nums[i]+nums[j];
        if (sum==target){
            isPossible = true;
            break;
        }
        if (sum>target){
            j--;
        }
        if (sum<target){
            i++;
        }
    }

    if(isPossible) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
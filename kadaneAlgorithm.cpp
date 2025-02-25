#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
	long long sum = 0; maxi = LONG_MIN;
	
	int n = arr.size();
	
	for (int i = 0; i<n; i++){
		sum += arr[i];
		
		if (sum>maxi){
			max = sum;
		}
		
		if (sum<0){
			sum = 0;
		}
	}
	
	cout << "The maximum subarray sum is: " <<  sum << "\n";
	
	return 0;
}

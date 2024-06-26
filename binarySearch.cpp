//binary search

#include<iostream>
#include<vector> 
using namespace std;

int binarySearch(int n, vector <int> &nums, int target) {
	int start = 0; 
	int end = nums.size() -1;
	int mid = start + (end - start)/2;
	
	while( start <= end ) {
		
		mid = start + (end - start )/2;
		if(nums[mid] == target) return mid;
		else if(nums[mid] > target) end = mid -1;
		else start = mid + 1;
	}
	
	return -1;
}

int main() {
	int n;
	cin>>n;
	
	vector<int> nums;
	
	for(int i = 0 ; i<n ; i++) {
		int num;
		cin>>num;
		nums.push_back(num);
	}
	
	int target;
	cout<<"Enter Target element : " << endl;
	cin>>target;
	
	int result = binarySearch(n,nums,target);
	
	if(result != -1) cout<< "Target found at index " << result << endl;
	else cout<< " target element is not found" << endl;
	
	return 0;
	
	
}

#include<iostream>
#include <vector>



using namespace std;

int linearSearch(int n , vector<int> nums , int target) {

	
	for(int i = 0; i < n ; i++) {
		if(nums[i] == target) {
			return i;
		}
		
	}
	// else condition will not be specified there as if we dont find elemnt we have to move ahead instead of returning 0;
	
	return -1;
}

int main() {
	int n;
	cin>>n;
	
	vector<int> nums;
	
	for(int i  = 0 ; i< n ; i++) {
		int num;
		cin>>num;
		nums.push_back(num);
	}
	
	int target; 
	cout<< " Provide target element : "<<endl;
	cin>> target;
	
	int result = linearSearch(n,nums,target);
	
 
	
	if( result != -1 ) {
		cout<< "target found at index " << result << endl;
	}
	else {
		cout<< "Target not found " << endl;
	}
	
	return 0;
}

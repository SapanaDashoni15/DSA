#include<iostream>
#include<climits>
using namespace std;
int main(){
//	int nums[] = {2,3,6,56};
//	
//	cout<<nums.length();
//	return 0;

	int n;
	cin>>n;
	int arr[n];
	int max=INT_MIN;
	int min=INT_MAX;
	//taking araay elements
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//printing array elements
	for(int i=0;i<n; i++){
		cout<<arr[i]<<" ";
	}
	//find max element
//	for(int j =0; j<n;j++){
//		if(arr[j]>max){
//			max=arr[j];
//			cout<<endl;
//		 }
//		
//	}
//	cout<<max;
//	// find minimum element
//	for(int k =0;k<n;k++){
//		if(arr[k]<min) min=arr[k];
//	}
//	
//	cout<<min;

	for(int i =0;i<n;i++){
		max= max(max, arr[i]);
		min= min(min, arr[i]);
	}
	cout<<max<<" "<<min;
	
	return 0;
}

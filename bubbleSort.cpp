#include<iostream>
#include<vector>

using namespace std;

void swap(int &a , int &b) {
	int temp = a;
	a = b; 
	b = temp;
}

void bubbleSort(int n, vector<int> &arr) {
	bool swapped ;
	for(int i = 0; i<n ; i++) {
		swapped = false;
		for(int j = 0; j<n-i-1; j++) {
			
			if(arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		
		if(!swapped) {
			break;
		}
	}
}

void printArray(int n, vector<int> arr) {
	for(int i = 0; i <n ; i++) {
		cout << arr[i] << " ";
	}
}

int main() 
{
	int n; 
	cin>>n;
	
	vector<int> arr(n);
	for(int i =0; i< n; i++) {
		cin>>arr[i];
	}
	
	bubbleSort(n, arr);
	cout<<"Sorted array" << endl;
	printArray(n,arr);
	
	return 0;
	
}




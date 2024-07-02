#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter n value : ";
	cin>>n;
//													INVERTED NUMBER PATTERN
//	int count = 1;
//	for(int i = n; i>=1; i--){
//		for(int j =1; j<=i; j++){
//			cout<<count<<" ";
//			count++;
//			
//		}
//		count=1;
//		cout<<endl;
//	}
	
//													0-1 PATTERN 
//	for(int i = 1; i<=n; i++){
//		for(int j = 1; j<=i ; j++){
//			if((i+j)%2==0){
//				cout<<1<<" ";
//			
//			}
//			else{
//				cout<<0<<" ";
//			}
//				
//		}
//		cout<<endl;
//	}
	
	
	for(int i = n; i>=1; i--){
		for(int j=0; j<i; j++){
			
			cout<<"*";
		}
		while(i<=n){
			
		}
		cout<<endl;
		
	}
	
	
	
	return 0;
}

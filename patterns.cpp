#include<iostream>
using namespace std;
int main(){
	
//	int rows,columns;
//	cout<<"Enter rows : ";
//	cin>>rows;
//	cout<<"Enter columns : ";
//	cin>>columns;
	
											// rectangle pattern
//	for(int i =0; i<n; i++){
//		for(int j=0;j<n;j++){
//		
//		cout<<"* ";
//		}
//	cout<<endl;
//	}

											// hollow rectangle pattern 
											// here we can also start with 1 and traverse till rows,columns...make it more optimal
//	for(int i =0; i<=rows-1 ; i++){
//		for(int j=0;j<=columns-1; j++){
//			if( i==0 ||i==rows-1 || j==0 || j==columns-1){
//				cout<<"*";
//			}
//			else{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}
						// inverted pyramid pattern
//	int n;
//	cin>>n;
//	for(int i = n; i>=1;i--){
//		for(int j =1; j<=i; j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//							half pyramid by 180^
//	for(int i =1; i<=n; i++){
//		for(int j=1; j<=n;j++){
//			if(j<=n-i){			//jabtak j n-1 se chota aur equal hai tab tak white spaces print honge warna fir star hi print hoga.
//				cout<<" ";
//			}
//			else{
//				cout<<"*";
//			}
//				
//			}
//			cout<<endl;
//		}


//									Half pyramid using numbers
//	int count =1;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i; j++){
//			cout<<count;
//		}
//		count++;
//		cout<<endl;
//	}
//						Floyd;s Triangle
//	int count = 1;
//	for(int i = 1;i<=n ; i++){
//		for(int j=1; j<=i; j++){
//			cout<<count++<<" " ;
//		}
//		cout<<endl;
//	}


//	for(int i=1;i<=n;i++){
//		for(int j =1; j<=i; j++){
//			cout<<"*";
//		}
//		int space = 2*n-2*i;
//		for(int j=1;j<=space;j++){
//			cout<<" ";	
//		}
//		
//		for(int j =1; j<=i; j++){
//			cout<<"*";
//	}
//	
//	cout<<endl;
//}
//	for(int i=n;i>=1;i--){
//		for(int j =1; j<=i; j++){
//			cout<<"*";
//		}
//		int space = 2*n-2*i;
//		for(int j=1;j<=space;j++){
//			cout<<" ";	
//		}
//		
//		for(int j =1; j<=i; j++){
//			cout<<"*";
//	}
//	
//	cout<<endl;
//}

	int n=5;
	for(int i=0;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<" ";
			}
		for(int j=1;j<2*i-1;j++){
			cout<<"*";
			}
		for(int j=1;j<=n-1;j++){
			cout<<" ";
			}
		cout<<endl;		
		
	}
	return 0;
	
}

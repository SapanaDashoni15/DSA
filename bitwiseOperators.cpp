#include<iostream>
using namespace std;
int main() {
	
//	int a  = 4;
//	int b = 6;
//	
//	cout << " a&b " << (a&b) <<endl;
//	cout << " a|b " << (a|b)<<endl;
//	
//	cout << " ~a " << (~a) <<endl;
	// NOT a ->  everything will be reversed 100 -> 00000000000.....100 -> NOT a -> 11111111....011
	//then while printing 1(in MSB) means negative so answer will be a negative number
	// then to print do 2s complement (1. 1s complement 2. Add 1)
	//so answer will be -5
	
//	cout << " a^b " << (a^b) <<endl;
	//XOR -> Odd ones detector
	
	
//	cout << (17>>1) << endl;
//	cout << (17 >> 2) << endl;
//	cout << (19 << 1) << endl;
//	cout << (19 << 2) << endl;
//	
//	
//	int i = 4;
//	
//	cout << (i++) << endl;
//	cout << (++i) << endl;
//	cout << (i--) << endl;
//	cout << (--i) << endl;
	
//	int a = 1;
//	int b = 2;
//	
//	if(a-- >0 && ++b >2) cout << "Stage1 - Inside if";
//	else cout << "Stage1 - inside else";
//	cout << a << " " << b << endl;

	int a = 1;
	int b = a++;
	int c = ++a;
	cout<<b<<" " <<c;
}

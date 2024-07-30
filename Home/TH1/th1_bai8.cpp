#include<iostream>
using namespace std;
int tong(int n){
	if(n<1){
		return 0;
	}
	return tong(n/10)+n%10;
}
int tong2(int n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		n/=10;
	}
	return tong;
}
int main(){
	int n;
	cin>>n;
	cout<<tong2(n);
}

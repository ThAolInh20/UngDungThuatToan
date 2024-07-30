#include<iostream>
using namespace std;
int TongLe(int n){
	if(n<1){
		return 0;
	}
	int so=n%10;
	so=(so%2==0)?0:so;
	return TongLe(n/10)+so;
}
int main(){
	int n;
	cin>>n;
	cout<<TongLe(n);
}

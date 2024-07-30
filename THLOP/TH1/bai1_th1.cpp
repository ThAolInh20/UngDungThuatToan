#include<iostream>
using namespace std;
int A1(int a, int b){
	if(b==0) return a;
	else return A1(b,a%b);
}
int A2(int a, int b){
	int du=1;
	while(b>0){
		du=b%a;
		if(du==0){
			return a;
		}
		a=b;
		int temp =b;
		b=a%b;
	}
	return 1;
}
int main(){
	cout<<A2(2,15);
}
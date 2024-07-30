#include<iostream>
using namespace std;
int UCLN(int a,int b){
	if(b%a==0) return a;
	if(a%b==0) return b;
	if(a<b){
		return UCLN(b,b%a);
	}else{
		return UCLN(a%b,a);
	}
}
int UCLN2(int a,int b){
	while(b%a!=0){
		int temp=a;
		a=b;
		b=b%temp;
	}
	return a;
}
int main(){
	cout<<UCLN(6,2);
}

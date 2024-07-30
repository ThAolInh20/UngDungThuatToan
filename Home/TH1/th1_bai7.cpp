#include<iostream>
using namespace std;
int fib(int n,int nho[]){
	if(n==1||n==2){
		return 1;
	}
		nho[n]=fib(n-1,nho)+fib(n-2,nho);
		return nho[n];
	
}
int fib2(int n){
	if(n==1||n==2){
		return 1;
	}
	int a=1,b=1,c;
	for(int i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int main(){
	int n;
	cin>>n;
	int nho[n+1];
	nho[1]=1;
	nho[2]=1;
	cout<<"so fib thu "<<n<<" la: "<<fib(n,nho)<<endl;;
//	for(int i=1;i<=n;i++){
//		cout<<nho[i]<<" ";
//	}
	
}

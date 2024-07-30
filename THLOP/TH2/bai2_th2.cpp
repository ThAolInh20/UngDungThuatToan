#include<iostream>
#include<String.h>
using namespace std;
void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}
 
void A2(int n,int S[],int start){
	if(start==n){
		for(int i=0;i<n;++i){
			cout<<S[i]<<" ";
		}
		cout<<endl;
		return ;
	}else{
		for(int i=start;i<n;++i){
				swap(S[start],S[i]);
				A2(n,S,start+1);
				swap(S[start],S[i]);
		}
	}
}

int main(){
	int n;
	cout<<"nhap n";
	cin>>n;
	if(n<=0){
		do{
			cout<<"nhap lai n:";
		}while(n<=0);
	}
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	A2(n,a,0);
}
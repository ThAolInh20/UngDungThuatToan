#include<iostream>
using namespace std;
void A1(int n,int a[],int start){
	if(start==n){
		for(int i=0;i<n;++i){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return ;
	}
	a[start]=0;
	A1(n,a,start+1);
	a[start]=1;
	A1(n,a,start+1);
}
void A2(int n ,char a[], int index){
	if(index==n){
		for (int i=0;i<n;++i){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
	a[index]='a';
	A2(n,a,index+1);
	a[index]='b';
	A2(n,a,index+1);
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
	char b[n];
	A2(n,b,0);
}

       
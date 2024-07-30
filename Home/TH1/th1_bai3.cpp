#include<iostream>
using namespace std;
int x[100];
int dd[100];
void printSub(int arr[],int k){
	for(int i=0;i<k;i++){
		cout<<arr[x[i]];
	}
	cout<<endl;
}
void sinhToHop(int arr[],int n,int k,int index){
	int last=(index==1)?0:x[index-1];
	for(int i=last+1;i<=n;i++){
		if(dd[i]==0){
			x[index]=i;
			if(index==k){
				printSub(arr,k);
			}else{
				dd[i]=1;
				sinhToHop(arr,n,k,index+1);
				dd[i]=0;
			}
		}
	}
}
int main(){
	int n,k;
	cout<<"nhap n:";
	cin>>n;
	cout<<"nhap k:";
	cin>>k;
	int arr[100]={1,2,3,4,5,6,7,8};
	for(int i=0;i<n;i++){
		dd[i]=0;
	}
	sinhToHop(arr,n,k,1);
}

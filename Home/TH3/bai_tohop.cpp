#include<iostream>
using namespace std;

int x[100];
int dd[100];

void ht(int arr[], int k){
	for(int i=1;i<=k;i++){
		cout<<arr[x[i]-1];
	}
	cout<<endl;
}
void tohop(int arr[],int n, int k, int index){
	int last=(index==1)?0:x[index-1];
	for(int i=last+1;i<=n;i++){
		if(dd[i]==0){
			x[index]=i;
			if(index==k){
				ht(arr,k);
			}else{
				dd[i]=1;
				tohop(arr,n,k,index+1);
				dd[i]=0;
			}
		}
	}
}
int main(){
	int arr[8]={1,2,3,4,5,6,7,8};
	for(int i=0;i<=8;i++){
		dd[i]=0;
	}
	tohop(arr,8,6,1);
}

#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void A2(int S[],int start,int n){
	if(start==n){
		for(int i=0;i<n;++i){
			cout<<S[i]<<" ";
		}
		cout<<endl;
		return ;
	}else{
		for(int i=start;i<n;++i){
				swap(S[start],S[i]);
				A2(S,start+1,n);
				swap(S[start],S[i]);
		}
	}
}

void printSubset(int arr[],int subset[],int k){
	for(int i=0;i<k;i++){
		cout<<arr[subset[i]]<<" ";
	}
	cout<<endl;
}
void A5(int arr[],int n,int k,int index,int subset[],int start){
	if(index==k){
		printSubset(arr,subset,k);
		A2(subset,0,k-1);
		return;
	}
	for (int i=start;i<n;i++){
		subset[index]=i;
		A5(arr,n,k,index+1,subset,i+1);
	}
}
int main(){
	
}

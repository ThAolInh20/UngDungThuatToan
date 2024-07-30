#include<iostream>
using namespace std;
void merge(float arr[], int left, int mid, int right){
	int n1=mid-left+1;
	int n2=right-mid;
	
	int l[n1],r[n2];
	for(int i=0;i<n1;i++){
		l[i]=arr[left+i];
	}
	for(int j=0;j<n2;j++){
		r[j]=arr[mid+1+j];
	}
	int i=0,j=0,k=left;
	while(i<n1&&j<n2){
		if(l[i]<r[j]){
			arr[k]=l[i];
			i++;
		}else{
			arr[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=l[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=r[j];
		j++;
		k++;
	}
	
}
void mergeSort(float arr[], int left, int right){
	if(left<right){
		int mid=left+(right-left)/2;
		mergeSort(arr,left,mid);
		mergeSort(arr,mid+1,right);
		merge(arr,left, mid,right);
	}
}
float tong(float arr[],int left, int right){
	int mid=left+(right-left)/2;
	if(left==right){
		return (arr[mid]>0)?arr[mid]:0;
	}
	return tong(arr,left,mid)+tong(arr,mid+1,right);
}
int main(){
	float arr[7]={1,2,4,12,-23,5,-52};
	mergeSort(arr,0,6);
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<tong(arr,0,7);
}

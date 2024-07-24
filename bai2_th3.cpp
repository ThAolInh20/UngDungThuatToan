#include<iostream>
using namespace std;
void merge(float arr[],int left, int mid, int right){
	int n1=mid-left+1;
	int n2=right-mid;
	
	float *l = (float*)malloc(n1 * sizeof(float));
	float *r = (float*)malloc(n2 * sizeof(float));
	for (int i=0;i<n1;i++){
		l[i]=arr[left+i];
	}
	for(int j=0;j<n2;j++){
		r[j]=arr[mid+1+j];
	}
	
	int i=0,j=0, k=left;
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
void mergeSort(float arr[],int left, int right){
	if(left<right){
		int mid=left+(right-left)/2;
		
		mergeSort(arr,left,mid);
		mergeSort(arr,mid+1,right);
		merge(arr,left, mid, right);
	}
}
int main(){
	float k[11]={4,2,6,12,3,4,2,4,6,7,3};
	mergeSort(k,0,10);
	for(int i=0;i<11;i++){
		cout<<k[i]<< " ";
	}
}
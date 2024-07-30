#include<iostream>
using namespace std;
void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}
void sinhHoanVi(int arr[], int left, int right){
	if(left==right){
		for(int i=0;i<right;i++){
			cout<<arr[i];
			
		}
		cout<<endl;
		return;
	}
		for(int i=left;i<right;i++){
			swap(arr[left],arr[i]);
			sinhHoanVi(arr,left+1,right);
			swap(arr[left],arr[i]);
		
		
	}
}
int main(){
	int n;
	cin>>n;
	int arr[100]={0,1,2,3,4,5,6,7,8,9,10,11,12,13};
	sinhHoanVi(arr,0,n);
}

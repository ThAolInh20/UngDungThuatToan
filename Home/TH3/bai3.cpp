#include<iostream>
using namespace std;
int max1(int arr[],int left, int right){
	int mid=left+(right-left)/2;
	if(left==right){
		return arr[mid];
	}
	return (max1(arr,left,mid)>max1(arr,mid+1,right))?max1(arr,left,mid):max1(arr,mid+1,right);
}
int main(){
	int arr[7]={13,54,432,22,67,51,36};
	cout<<max1(arr,0,6);
}

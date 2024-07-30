#include<iostream>
using namespace std;
int find(int arr[],int left, int right){
	int mid=left+(right-left)/2;
	if(left==right){
		return (arr[mid]%2==0)?arr[mid]:0;
	}
//	int max1=find(arr,left,mid);
//	int max2=find(arr,mid+1,right);
//	return (max1>max2)?max1:max2;
	return (find(arr,left,mid)>find(arr,mid+1,right))?find(arr,left,mid):find(arr,mid+1,right);
}
int main(){
	int	arr[9]={23,23,43,5,23,7,5,43,323};
	int max=find(arr,0,9);
	if(max!=-1){
		cout<<"max chan la"<<max;
	}else{
		cout<<"khong co so chan";
	}
}

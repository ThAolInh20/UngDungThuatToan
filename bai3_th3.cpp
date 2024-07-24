#include<iostream>
using namespace std;
float max(float arr[], int left, int right){
	
		int mid=left+(right-left)/2;
		if(left==right){
			return arr[mid];
		}
		if(max(arr,left,mid)>max(arr,mid+1,right)){
			return max(arr,left,mid);
		}else{
			return max(arr,mid+1,right);
		}
	
}
int main(){
	float k[11]={4,2,6,12,32,4,2,4,6,7,3};
	cout<<max(k,0,10);
}
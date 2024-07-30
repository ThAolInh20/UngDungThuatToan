#include<iostream>
#include<stack>
using namespace std;
void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}
int partition(int arr[],int low, int high){
	int pivot=arr[high];//chon phan tu truc la ptu cuoi cung
	int i=low-1;//chi so phan tu nho hon
	for(int j=low;j<=high-1;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return i+1;
}
void A4(int arr[],int low, int high){
	if(low<high){
		int pi=partition(arr,low,high);
		A4(arr,low,pi-1);
		A4(arr,pi+1,high);
	}
}
void A5(int arr[],int low,int high){
	stack<pair<int,int>> stack;
	stack.push(make_pair(low,high));
	while(!stack.empty()){
		pair<int,int> current=stack.top();
		stack.pop();
		int l=current.first;
		int h=current.second;
		
		int p=partition(arr,l,h);
		
		if(p-1>l){
			stack.push(make_pair(l,p-1));
		}
		if(p+1<h){
			stack.push(make_pair(p+1,h));
		}
	}
}
int main(){
	int n=rand()*1000;
	if(n<3000){
		do{
			n=rand()*1000;
		}while(n<3000);
	}
	cout<<"so phan tu:"<<n<<endl;
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=rand();
	}
	A5(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
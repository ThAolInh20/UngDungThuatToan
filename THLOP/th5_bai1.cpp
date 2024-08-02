#include<iostream>
using namespace std;
void Sort(float x[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			if(x[j]<x[j+1]){
				int temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
}
int F1(float x[],int n,int m){
	int i=0,dem=0;
	while(m>=0&&i<n){
		if(x[i]<=m){
			m-=x[i];
			dem++;
			
		}
		else{
			i++;
		}
		
	}
	if(m>0){
		return -1;
	}
	return dem;
}
int main(){
	int n=7;
	float x[n]={100,25,50,75,1,10,5};
	Sort(x,n);
	cout<<F1(x,n,117);
}
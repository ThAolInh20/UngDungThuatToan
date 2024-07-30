#include<iostream>
using namespace std;
void sinhNhiPhan(int np[],int left, int right){
	if(left==right){
		for(int i=0;i<right;i++){
			cout<<np[i];
		}
		cout<<endl;
		return;
	}
	np[left]=0;
	sinhNhiPhan(np,left+1,right);
	np[left]=1;
	sinhNhiPhan(np,left+1,right);
}
int main(){
	int n;
	cout<<"nhap n:";
	cin>>n;
	int np[n];
	sinhNhiPhan(np,0,n);
}

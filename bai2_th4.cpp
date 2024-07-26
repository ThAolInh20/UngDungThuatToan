#include<iostream>
using namespace std;
int n, m;
char arr[7]={'A','B','C','D','E','F','G'};
int x[100];
int dd[100];

void show(){
	for(int i=1;i<=m;i++){
		cout<<arr[x[i]-1];
	}
	cout<<endl;
}
void Try(int k){
	int last=(k==1)?0:x[k-1];
	for(int i=last+1;i<=n;i++){
		if(dd[i]==0){
			x[k]=i;
			if(k==m){
				show();
			}else{
				dd[i]=1;
				Try(k+1);
				dd[i]=0;
			}
		}
	}
}
int main(){
	cout<<"nhap n:";
	cin>>n;
	cout<<"nhap m:";
	cin>>m;
	for(int i=0;i<n;i++){
		dd[i]=0;
		
	}
	Try(1);
	
}
#include<iostream>
using namespace std;
int chietnuoc(int chai[],int n,int d){
	int i=0;
	if(d<chai[0]){
		return -1;
	}
	while(i<=n&&d>=chai[i]){	
		d-=chai[i];	
		cout<<d<<endl;
		i++;
		
	}
	return i;
}
int main(){
	int n=7;
	int chai[n]={2,3,4,5,6,7,8,12};
	cout<<chietnuoc(chai,n,0);
}
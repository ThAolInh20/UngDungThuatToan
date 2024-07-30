#include<iostream>
using namespace std;
void sinhC(char lt[],int left, int right){
	if(left==right){
		for(int i=0;i<right;i++){
			cout<<lt[i];
		}
		cout<<endl;
		return;
	}
	lt[left]='a';
	sinhC(lt,left+1,right);
	lt[left]='b';
	sinhC(lt,left+1,right);
}
int main(){
	int n;
	cin>>n;
	char lt[n];
	sinhC(lt,0,n);
}

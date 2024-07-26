#include<iostream>
using namespace std;
void swap(char &a,char &b){
 	char temp=a;
 	a=b;
 	b=temp;
}
void A2(char G[], char N[][225],int start, int end, int &dem){
	if(start==end){
		for(int i=0;i<end;i++){
			cout<<N[i]<<" ngoi ghe "<<G[i]<<" ,";
		}
		cout<<endl;
		dem++;
	}
	for(int i=start;i<end;i++){
		swap(G[start],G[i]);
		A2(G,N,start+1,end,dem);
		swap(G[start],G[i]);
	}
}
int main(){
	char G[4]={'A','B','C','D'};
	char N[4][225]={"tung","cuc","truc","mai"};
	int k=0;
	A2(G,N,0,4,k);
	cout<<"so cach sap xep la:"<<k;
}
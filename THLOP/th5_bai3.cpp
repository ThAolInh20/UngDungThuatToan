#include<iostream>
using namespace std;
typedef struct CongViec{
	int start;
	int end;
}CongViec;
void swap(CongViec &a,CongViec &b){
	CongViec temp=a;
	a=b;
	b=temp;
}
void ht(CongViec a){
	cout<<"{"<<a.start<<","<<a.end<<"};";
}
void printList(CongViec list[],int n){
	for(int i=0;i<n;i++){
		ht(list[i]);
	}
}
void Sort(CongViec list[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(list[min].start>list[j].start){
				min=j;
			}
		}
		swap(list[min],list[i]);
	}
}
void Check(CongViec list[],int n,CongViec listSub[],int &j){
	
	for(int i=1;i<n;i++){
		if(listSub[j-1].end<=list[i].start){
			listSub[j]=list[i];
			j++;
		}
	}
}
int main(){
	int n=6;
	CongViec list[n]{
		{3,4
		},
		{2,3
		},
		{7,8
		},
		{9,12
		},
		{3,2
		},
		{5,7
		},
	};
	Sort(list,n);
	printList(list,n);
	CongViec listSub[n];
	listSub[0]=list[0];
	int m=1;
	Check(list,n,listSub,m);
	cout<<endl;
	cout<<m;
	
	

}
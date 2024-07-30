#include<iostream>
using namespace std;
typedef struct ChuyenBay{
	char SoHieu[225];
	double GiaVe;
	int SoGhe;
}ChuyenBay;
void ht(ChuyenBay c){
	int  a=c.GiaVe;
	cout<<c.SoHieu<<" "<<a<<" "<<c.SoGhe<<endl;
}
void A1(ChuyenBay b[],int n){

	if(b[n].GiaVe>700000){
		ht(b[n]);
	}
	while(n>0){
		A1(b,n-1);
	}
}
int A2(ChuyenBay b[],int start, int n){
	if(start==n){
		return b[start].GiaVe;
	}
	int mid=start+(n-start)/2;
	int minL=A2(b,start,mid);
	int minR=A2(b,mid+1,n);
	return (minL<minR)?minL:minR;
}
int main(){
	int n;
	ChuyenBay b[8]={
		{ "VN001",500000,30},
		{ "VN002",300000,30},
		{ "VN003",600000,30},
		{ "VN004",700000,30},
		{ "VN005",800000,30},
		{ "VN006",400000,30},
		{ "VN007",900000,30},
		{ "VN008",1000000,30}
	};
	A1(b,8);
}
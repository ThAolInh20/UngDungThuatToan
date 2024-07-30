#include<iostream>
using namespace std;
float mu(float a, int n){
	if(n==0){
		return 1;
	}
	if(n%2==0) return mu(a,n/2)*mu(a,n/2);
	else return mu(a,n/2)*mu(a,n/2)*a;
}
int main(){
	float a;
	int n;
	cin>>a;
	cin>>n;
	cout<<mu(a,n);
}

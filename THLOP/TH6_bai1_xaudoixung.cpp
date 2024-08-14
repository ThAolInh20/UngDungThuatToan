#include<iostream>
#include<string.h>
using namespace std;
int check(char *a){
	int i = 0;
	int n = strlen(a); 
	while(a[i]){
		if(a[i] != a [n - i - 1]){
			return 0;
		}	
		i++;
	}
	return 1;	
}
int tim(char *a, int k){
	int i = k;
	while(i >= 0){
		if(a[i] !=  a[k * 2 - i]){
			break;
		}
		i--;
	}
	return ++i;
}
int main(){
	char a[225]="abccbabcc";
	int k = 5;
	if(check(a)){
		cout<<"giong"<<endl;
	}
	else{
		int h = tim(a, k);
		int strlencon = (k - h) * 2 +1;
		for (int i = 0; i < strlencon; i++){
			cout<<a[i + h];
		}
	}

}


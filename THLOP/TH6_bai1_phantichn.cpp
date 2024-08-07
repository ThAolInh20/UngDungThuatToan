	#include<iostream>
	using namespace std;
	int f(int n){
		int dp[n+1];
		dp[0]=1;
		for(int j=1;j<=n;j++){
			dp[j]=0;
		}
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				dp[j] += dp[j-i];
			}
		}
		int result=dp[n];
		
		return result;
		
	}
	int main(){
		int m,n;
	
		cin>>n;
		int k=f(n);
		cout<<k;
	}

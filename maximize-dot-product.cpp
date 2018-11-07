//https://practice.geeksforgeeks.org/problems/maximize-dot-product/0

#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n,m;
	    cin>>n>>m;
	    int arr1[n];
	    int arr2[m];
	    long long int dp[n+1][m+1];
	    
	    for(int i=0;i<n;i++)
	        cin>>arr1[i];
	    for(int i=0;i<m;i++)
	        cin>>arr2[i];

	    for(int i=0;i<=n;i++)
	        for(int j=0;j<=m;j++){
	            if(i==0 || j==0)
	                dp[i][j]=0;
	            else
	                dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]+(long long)arr1[i-1]*arr2[j-1]);
	        }     
	    cout<<dp[n][m]<<endl;
	    
	}
	return 0;
}

//https://practice.geeksforgeeks.org/problems/coin-change/0

#include <iostream>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int m;
	    cin>>m;
	    int arr[m];
	    for(int i=0;i<m;i++)
	        cin>>arr[i];
	    int n;
	    cin>>n;
	    int memoization[m][n+1];
	    for(int i=0;i<m;i++)
	        for(int j=0;j<=n;j++){
	            if(i==0 && j==0)
	                memoization[i][j]=1;
	            else if(i==0){
	                if(j%arr[i]==0)
	                    memoization[i][j]=1;
	                else
	                    memoization[i][j]=0;
	            }
	            else if(j>=arr[i])
	                memoization[i][j]=memoization[i-1][j]+memoization[i][j-arr[i]];
	            else
	                memoization[i][j]=memoization[i-1][j];
	        }
	   cout<<memoization[m-1][n]<<endl;
	}
	return 0;
}

//https://practice.geeksforgeeks.org/problems/charul-and-vessels/0

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcase,n,k;
	cin>>testcase;
	while(testcase--){
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    sort(arr,arr+n);
	    
	    /*for(int i=0;i<n;i++)
	        cout<<arr[i]<<" ";
	    cout<<endl;
	    */
	    
	    
	    bool memoize[n+1][k+1];
	    for(int i=0;i<=n;i++)
	        for(int j=0;j<=k;j++){
	            if(i==0 && j==0)
	                memoize[i][j]=true;
	            else if(i==0)
	                memoize[i][j]=false;
	            else if(arr[i-1]>j)
	                memoize[i][j]=memoize[i-1][j];
	            else
	                memoize[i][j]=memoize[i-1][j]||memoize[i][j-arr[i-1]];
	            
	        }
	        
	   /* for(int i=0;i<=n;i++){
	        for(int j=0;j<=k;j++){
	            cout<<memoize[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	    */
	            
	        
	    
	    if(memoize[n][k])
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	}
	return 0;
}

//https://practice.geeksforgeeks.org/problems/minimum-sum-partition/0

#include <iostream>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n,total=0;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        total+=arr[i];
	    }
	    
	    int half=total/2;
	    
	    int memoize[n+1][half+1];
	    for(int i=0;i<=n;i++)
	        for(int j=0;j<=half;j++){
	            if(j==0 || i==0) memoize[i][j]=0;
	            else if(arr[i-1]>j)
	                memoize[i][j]=memoize[i-1][j];
	            else
	                memoize[i][j]=max(memoize[i-1][j],memoize[i-1][j-arr[i-1]]+arr[i-1]);
	        }
	    
	    /*    
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=half;j++)
	            cout<<memoize[i][j]<<" ";
	        cout<<endl;
	    }
	    */
	    
	    
	    cout<<total-2*memoize[n][half]<<endl;
	}
	return 0;
}

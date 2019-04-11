//https://practice.geeksforgeeks.org/problems/chicks-in-a-zoo/0

#include <iostream>
#include <numeric>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    cin>>n;
	    long long int arr[n]={0};
	    
	    for(int i=0;i<n;i++){
	        if(i==0)
	            arr[i]=1;
	        else for(int j=max(0,i-5);j<i;j++)
	            arr[i]+=2*arr[j];
	    }
	    long long int ans=0;
	    for(int i=max(0,n-6);i<n;i++)
	        ans+=arr[i];
	    cout<<ans<<endl;
	}
	return 0;
}

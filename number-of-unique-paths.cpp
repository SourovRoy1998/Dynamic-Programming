//https://practice.geeksforgeeks.org/problems/number-of-unique-paths

#include <iostream>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int m,n;
	    cin>>m>>n;
	    int memoize[m][n];
	    
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            if(i==0 || j==0) memoize[i][j]=1;
	            else memoize[i][j]=memoize[i-1][j]+memoize[i][j-1];
	        }
	    }
	    cout<<memoize[m-1][n-1]<<endl;
	}
	return 0;
}

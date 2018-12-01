//https://practice.geeksforgeeks.org/problems/max-rectangle/1

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

int largest_area_in_histogram(int arr[], int n){
    #include<bits/stdc++.h>
    int i=0;
    stack<int> s;
    int max_rectangle=0;
    while(i<n){
        if(s.empty() || arr[s.top()]<=arr[i])
            s.push(i++);
        else while(!s.empty() && arr[s.top()]>arr[i]){
                int x=s.top();
                s.pop();
                if(!s.empty())
                    max_rectangle=max(max_rectangle,(i-s.top()-1)*arr[x]);
                else 
                    max_rectangle=max(max_rectangle,i*arr[x]);
        }
    }
    
    while(!s.empty()){
                int x=s.top();
                s.pop();
                if(!s.empty())
                    max_rectangle=max(max_rectangle,(i-s.top()-1)*arr[x]);
                else 
                    max_rectangle=max(max_rectangle,i*arr[x]);
        }
        
    return max_rectangle;
}

/*You are required to complete this method*/
int maxArea(int M[MAX][MAX],int n,int m)
{
    int result[m]={0};
    int max_rectangle=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j]==0)
                result[j]=0;
            else 
                result[j]+=1;
        }
        max_rectangle=max(max_rectangle,largest_area_in_histogram(result,m));
    }
    return max_rectangle;
}

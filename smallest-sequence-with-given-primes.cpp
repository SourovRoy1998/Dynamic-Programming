//https://www.interviewbit.com/problems/smallest-sequence-with-given-primes/

vector<int> Solution::solve(int A, int B, int C, int D) {
    vector<int> result;
    int i=0,j=0,k=0, l=1;
    result.push_back(1);
    
    while(l<=D){
        result.push_back(min(min(A*result[i],B*result[j]),C*result[k]));
        l++;
        if(result[l-1]==A*result[i])
            i++;
        if(result[l-1]==B*result[j])
            j++;
        if(result[l-1]==C*result[k])
            k++;
    }
    
    result.erase(result.begin()+0);
    return result;
}

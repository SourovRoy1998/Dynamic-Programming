//https://www.interviewbit.com/problems/longest-substring-without-repeat/

int Solution::lengthOfLongestSubstring(string A) {
    set<char> set_of_char;
    int i=0,j=0,temp_length=0,longest_length=0;
    while(i<A.length()){
        if(set_of_char.find(A[i])==set_of_char.end()){
            set_of_char.insert(A[i]);
            i++;
            temp_length++;
        }
        else{
            while(A[j]!=A[i]){
                set_of_char.erase(A[j]);
                j++;
                temp_length--;
            }
            set_of_char.erase(A[j]);
            j++;
            temp_length--;
        }
        
        if(temp_length>longest_length)
            longest_length=temp_length;
        
        
    }
    return longest_length;
}

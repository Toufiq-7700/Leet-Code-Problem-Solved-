class Solution {
public:
    int countBinarySubstrings(string s) {
        int curr=1;
        int prev=0;
        int ans=0;
        for(int i=0; i<s.length()-1; i++){
            if(s[i] == s[i+1]){
                curr++; 
            }
            else{
                ans += min(curr,prev);
                prev=curr;
                curr=1;
            }
        }
        
        ans+= min(curr,prev);

        return ans;
    }
};

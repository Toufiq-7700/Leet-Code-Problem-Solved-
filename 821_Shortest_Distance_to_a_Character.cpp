class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans;
        int n = s.length();
        for(int k=0; k<n; k++){
            int cnt = 0;
            int i = k;
            int j = k;

            while(i<n || j >=0){
                if((i<n && s[i] == c) || (j>=0 && s[j] == c)){
                    ans.push_back(cnt);
                    break;
                }
                else{
                    if(i<n)i++;
                    if(j>=0)j--;
                    cnt++;
                }
            }
        } 
        return ans;
    }
};

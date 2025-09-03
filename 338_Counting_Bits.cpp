class Solution {
public:
    int helper(int n){
        if(n==0) return 0;
        int cnt = 0;
        while(n>0){
            if(n%2 == 1)cnt++;
            n /= 2;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            int x = helper(i);
            ans.push_back(x);
        }
        return ans;
    }
};

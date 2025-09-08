class Solution {
public:
    bool helper(int n){
        while(n>0){
            if(n%10 == 0) return false;
            n /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        for(int i=1; i<n; i++){
            int j=n-i;
            if(helper(i) && helper(j)){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
        return ans;
    }
};

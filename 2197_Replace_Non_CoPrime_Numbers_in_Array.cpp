class Solution {
public:
    int gcd(int a, int b){
        if(b==0) return a;
        return gcd(b, a%b);
    }

    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> ans;
        for(auto num : nums){
            while(! ans.empty()){
                int top=ans.back();
                int g=gcd(top, num);
                if(g==1) break;
                ans.pop_back();
                long long merge = (long long) (top/g)*num;
                num = (int) merge;
            }
            ans.push_back(num);
        }
        return ans;
    }
};

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        // for(int i=0; i<n; i++){
        //     int temp = 0;
        //     for(int j=i; j<n; j++){
        //         temp ^= nums[j];
        //         if(temp != 0){                   ////Time limit Exceed
        //             ans = max(ans, j-i+1);
        //         }
        //     }
        // }
        for(auto x : nums){
            ans ^= x;
        }
        if(ans != 0) return n;
        bool flag = true;
        for(auto x : nums){
            if(x != 0){
                flag = false;
                break;
            }
        }
        if(flag) return 0;

        return n-1;
    }
};

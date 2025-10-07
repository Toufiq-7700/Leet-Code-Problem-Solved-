class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        int n = nums.size();
        // for(int i=0; i<=n-k; i++){
        //     double temp = 0;
        //     for(int j=i; j<i+k; j++){
        //         temp += nums[j];
        //     }                          Time limit exceeded
        //     temp /= k;
        //     if(ans < temp){
        //         ans = temp;
        //     }
        // }
        double temp = 0; // first k elements
        for(int i=0; i<k; i++){
            temp += nums[i];
        }
        ans = temp;
        for(int i=k; i<n; i++){
            temp += nums[i] - nums[i-k]; // adding next one element and subtract previous one
            ans = max(ans, temp);
        }
        return ans/k;
    }
};

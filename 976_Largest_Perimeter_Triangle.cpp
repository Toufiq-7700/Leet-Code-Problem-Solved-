class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i=2; i<n; i++){
            // for(int j=i+1; j<n; j++){
            //     for(int k=j+1; k<n; k++){
                    int a=nums[i-2];
                    int b=nums[i-1];
                    int c=nums[i];
                    if((a+b > c) && (b+c > a) && (a+c) > b){
                        ans = max((a+b+c),ans);
                    }  
            //     }
            // }
        }
        return ans;
    }
};

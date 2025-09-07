class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int> ans;
        for(auto x : nums1){
            for(int i=0; i<nums2.size(); i++){
                if(x == nums2[i]){
                    ans.push_back(x);
                    nums2.erase(nums2.begin()+i);
                    break;
                }
            }
        }
       // vector<int> res(ans.begin(), ans.end());
        return ans;
    }
};

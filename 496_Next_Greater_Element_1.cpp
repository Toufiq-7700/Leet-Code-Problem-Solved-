class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;

        for(int i=0; i<nums1.size(); i++){
            int temp = nums1[i];
            auto it = find(nums2.begin(), nums2.end(), temp);
            int k = it - nums2.begin();
            int cnt = -1;
            for(int j=k+1; j<nums2.size(); j++){
                if(nums2[j] > temp){
                    cnt = nums2[j];
                    break;
                }
            }
            ans.push_back(cnt);
        }

        return ans;
    }
};

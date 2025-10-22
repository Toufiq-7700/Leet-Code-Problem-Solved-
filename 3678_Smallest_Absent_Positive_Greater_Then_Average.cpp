class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n = nums.size();
        double avg, temp=0;
        for(int i=0; i<n; i++) temp += nums[i];
        avg = temp/n;
        temp = 1;
        while(1){
            if(temp > avg && find(nums.begin(),nums.end(), temp) == nums.end()) return temp;
            temp++;
        }
        return nums[n-1]+1;
    }
};

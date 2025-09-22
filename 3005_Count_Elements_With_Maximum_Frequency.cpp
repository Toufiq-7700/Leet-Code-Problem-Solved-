class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        for(auto n : nums){
            mp[n]++;
        }
        int temp=INT_MIN;
        int ans=0;
        for(auto x : mp){
            temp = max(x.second, temp);
        }
        for(auto i=mp.begin(); i != mp.end(); i++){
            if(i->second == temp){
                ans += i->second;
                temp= i->second;
            }
            // else{
            //     ans=0;
            //     ans += i->second;
            //     temp = i->second;
            // }
        }
        return ans;
    }
};

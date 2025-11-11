class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0, temp = 0;
        for(int i=0; i<colors.length(); i++){
            if(i>0 && colors[i] != colors[i-1]){
                temp = 0;
            }
            ans += min(temp, neededTime[i]);
            temp = max(temp, neededTime[i]);
        }
        return ans;
    }
};

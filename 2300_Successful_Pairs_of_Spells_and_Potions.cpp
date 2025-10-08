class Solution {
public:
    long long helper(vector<int> &potions, long long i, long long succ){
        int left = 0;
        int right = potions.size()-1;
        int idx = -1;
        while(left <= right){
            int mid = (left+right)/2;
            if((long long)potions[mid] * i >= succ){
                idx = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return idx;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans(spells.size(),0);
        // for(int i=0; i<spells.size(); i++){
        //     long long a = spells[i];
        //     int cnt = 0;
        //     for(int j=0; j<potions.size(); j++){
        //         if(a * potions[j] >= success){
        //             cnt++;                       //Time Limit Exceed
        //         }
        //     }
        //     ans.push_back(cnt);
        // }
        // return ans;
        int a = potions.size();
        sort(potions.begin(), potions.end());
        for(int i=0; i<spells.size(); i++){
            int temp = helper(potions, spells[i], success);
            if(temp != -1){
                ans[i] = a - temp;
            }
        }
    return ans;
    }
};

class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<vector<int>>& arr, vector<int>& temp,int i){
        if(i == temp.size()){
           ans.push_back(temp);
           return;
        }
        for(int j=i; j<temp.size(); j++){
            swap(temp[i],temp[j]);
            solve(arr,temp,i+1);
            swap(temp[i],temp[j]);
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        ans.clear();

        solve(ans,nums,0);

        return ans;
    }
};

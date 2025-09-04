class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        int i=0,j=0;
        unordered_map<string,int> mp;
        for(i=0; i<list1.size(); i++){
            mp[list1[i]]=i;
        }
        int minsum=INT_MAX;

        for(j=0; j<list2.size();j++){
            if(mp.find(list2[j]) != mp.end()){
                int sum = j+mp[list2[j]];
                if(sum < minsum){
                    ans.clear();
                    ans.push_back(list2[j]);
                    minsum = sum;
                }
                else if(minsum == sum){
                    ans.push_back(list2[j]);
                }
            }
        }

        return ans;
    }
};

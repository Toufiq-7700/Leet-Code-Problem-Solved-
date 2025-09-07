class Solution {
public:
    vector<int> sumZero(int n) {
        int x = n/2;
        vector<int> ans;
        if(n%2 != 0){
            x = -x;
            for(int i=0; i<n; i++){
                ans.push_back(x);
                x++;
            }
        }
        if(n%2 == 0){
            x = -x;
            for(int i=0; i<n; i++){
                if(x==0){
                    x++;
                    i--;
                    continue;
                }
                ans.push_back(x);
                x++;
            }
        }
        return ans;
    }
};

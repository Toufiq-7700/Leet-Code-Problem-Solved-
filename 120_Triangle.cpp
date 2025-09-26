class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> dp1(n, INT_MAX);

        if(triangle.size() == 1) return triangle[0][0];
        dp1[0] = triangle[0][0];

        for(int i=1; i<triangle.size(); i++){
            vector<int> dp2(i+1, INT_MAX);
            for(int j=0; j<=i; j++){
                if(j<i){
                    dp2[j] = min(dp2[j] , dp1[j]+triangle[i][j]);
                }
                if(j-1 >= 0){
                    dp2[j] = min(dp2[j], dp1[j-1]+triangle[i][j]);
                }
            }
            dp1 = dp2;
        }

    return *min_element(dp1.begin(), dp1.end());
    }
};

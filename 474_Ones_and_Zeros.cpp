class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
    //     int maxlen = 0;
    //     int ans = 0;
    //     for(auto s : strs){
    //         int len0 = 0;
    //         int len1 = 0;
    //         bool flag = true;
    //         for(int i=0; i<s.length(); i++){
    //             if(s[i] == '0'){
    //                 len0++;
    //                 // if(len0 > m){
    //                 //     len0 = 0;
    //                 //     len1 = 0;
    //                 //     flag = false;
    //                 //     break;
    //                 // } 
    //             }
    //             else{
    //                 len1++;
    //                 // if(len1 > n){
    //                 //     len0 = 0;
    //                 //     len1 = 0;
    //                 //     flag = false;
    //                 //     break;
    //                 // }
    //             }
    //         }
    //         if(len1 <= n && len0 <= m){
    //             ans ++;
    //         }
    //         //maxlen = max(maxlen, (len0+len1));
    //     }
    //    // return maxlen;
    //    return ans;
      vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
      for(auto s : strs){
          int zero = count(s.begin(), s.end(), '0');
          int one = s.length() - zero;
          for(int i=m; i>=zero; i--){
              for(int j=n; j>=one; j--){
                  dp[i][j] = max(dp[i][j], dp[i-zero][j-one]+1);
              }
          }
      }
      return dp[m][n];
    }
};

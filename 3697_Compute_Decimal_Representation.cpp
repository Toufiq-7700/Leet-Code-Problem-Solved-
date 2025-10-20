class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        long long x = 1;
        while(n > 0){
            long long temp = n % 10;
            if(temp != 0){
                ans.push_back(int(temp * x));
            }
            x  *= 10;
            n /= 10;
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

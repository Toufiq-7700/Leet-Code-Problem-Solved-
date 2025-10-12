class Solution {
public:
    bool scoreBalance(string s) {
        int n=s.length();
        vector<int> freq(n);
        freq[0] = s[0]-'a'+1;
        for(int i=1; i<n; i++){
            freq[i] += freq[i-1]+(s[i]-'a'+1);
        }
        if(freq[n-1] % 2 != 0) return false;

        int temp = freq[n-1] / 2;
        for(int i=0; i<n; i++){
            if(temp == freq[i]) return true;
        }
        // unordered_set<int> xx(freq.begin(), freq.end());
        // if(xx.count(temp) > 0) return true;
        return false;
    }
};

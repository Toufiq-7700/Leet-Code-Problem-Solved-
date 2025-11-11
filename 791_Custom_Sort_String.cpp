class Solution {
public:
    string customSortString(string order, string s) {
        string ans;
        for(auto c:order){
            auto x = find(s.begin(),s.end(), c);
            while(x != s.end()){
                ans += c;
                s.erase(x);
                 x = find(s.begin(), s.end(), c);
            }
        }
        return ans+s;
    }
};

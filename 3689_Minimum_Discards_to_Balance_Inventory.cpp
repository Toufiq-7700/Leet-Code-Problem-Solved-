class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        int n = arrivals.size();
        if(n == 0) return 0;
        vector<int> keep(n, 0);
        unordered_map<int , int> mp;
        int dis = 0;
        for(int i=0; i<n; i++){
            int idx = i-w;
            if(idx >= 0 && keep[idx]){
                mp[arrivals[idx]]--;
            }
            int t = arrivals[i];
            if(mp[t] < m){
                keep[i] = 1;
                mp[t]++;
            }
            else dis++;
        }
        return dis;
    }
};

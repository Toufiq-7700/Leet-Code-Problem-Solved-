class Solution {
public:
    int hammingWeight(int n) {
        vector<int> bi;
        while (n != 0){
            bi.push_back(n%2);
            n/=2;
        }
        int cnt=0;
        for(auto x:bi){
            if(x==1)cnt++;
        }
        return cnt;
    }
};

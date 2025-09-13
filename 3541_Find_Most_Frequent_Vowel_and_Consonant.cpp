class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> mpp;
        for(auto ch : s){
            mpp[ch]++;
        }
        int v=0;
        int c=0;
        for(auto mp : mpp){
            if(mp.first == 'a' || mp.first == 'e' || mp.first == 'i' || mp.first == 'o' || mp.first == 'u'){
                if(mp.second > v) v= mp.second;
            }
            else{
                if(mp.second > c) c = mp.second;
            }
        }
        return v+c;
    }
};

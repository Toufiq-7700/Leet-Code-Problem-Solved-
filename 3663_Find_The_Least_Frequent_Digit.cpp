class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> freq(10);
        int ans = -1;
        while(n>0){
            int temp = n%10;
            freq[temp]++;
            n /= 10;
        }
        int minfreq=INT_MAX;
        for(int i=0; i<10; i++){
            if(freq[i] > 0 && minfreq > freq[i]){
                ans = i;
                minfreq = freq[i];
            }
        }
        return ans;
    }
};

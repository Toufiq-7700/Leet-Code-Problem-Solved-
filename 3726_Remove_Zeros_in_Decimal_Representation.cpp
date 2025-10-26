class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0;
        int p = 0;
        while(n > 0){
            long long x = n % 10;
            if(x != 0){
                ans = ans + (pow(10, p) * x);
                p++;
            }
            n /= 10;
        }
      return ans;
    }
};

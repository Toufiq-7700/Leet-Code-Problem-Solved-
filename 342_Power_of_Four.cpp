class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;

        long long x=0;
        int i=0;
        while(x<=n){
            x =pow(4,i);
            i++;
            if(x == n) return true;
            else if(x > n) {
                return false;
                break;
            }
        }
        return false;
    }
};

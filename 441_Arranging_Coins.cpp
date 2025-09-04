class Solution {
public:
    int arrangeCoins(int n) {
        long long left = 1;
        long long right = n;
        while(left <= right){
            long long mid = (left+right)/2;
            long long ans = (mid*(mid+1))/2;
            if(n < ans) right = mid-1;
            else left = mid+1;
        }
        return int(right);
    }
};

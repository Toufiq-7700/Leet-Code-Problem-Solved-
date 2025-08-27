class Solution {
public:

    long long revnum(long long n, long long rev=0){
        if(n==0) return rev;
        return revnum(n/10, rev*10 + n%10);
    }

    bool isPalindrome(int x) {
        if(x < 0) return false;

        return x == revnum(x);
    }
};

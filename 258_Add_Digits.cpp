class Solution {
public:
    int addDigits(int num) {
        if(num/10 == 0) return num;
        int x = 0;
        int a=num;
        while(a > 0){
            x += a%10;
            a /= 10;
        }
        num=x;
        return addDigits(num);
    }
};

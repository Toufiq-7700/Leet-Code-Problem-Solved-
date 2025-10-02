class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int empty=numBottles;
        int temp=0;
        while(empty >= numExchange){
            temp=empty/numExchange;
            ans += temp;
            empty = empty % numExchange + temp;
        }
        return ans;
    }
};

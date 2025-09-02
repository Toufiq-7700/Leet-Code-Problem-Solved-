class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long int a = LLONG_MIN;
        long int b = LLONG_MIN;
        long int c = LLONG_MIN;

        for(int i=0; i<nums.size(); i++){
            int x = nums[i];
            if(x == a || x == b || x ==c) continue;
            if(x > a) {
                c = b;
                b = a;
                a = x;  
            }
            else if(x > b){
                c = b;
                b = x;  
            }
            else if(x > c) c = x;
        }
        return (c == LLONG_MIN ? a : c);
    }
};

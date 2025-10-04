class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int i=0;
        int j=n-1;
        int temp=0, ans=INT_MIN;
        int l=n-1;

        while(i < j){
            int x = height[i];
            int y = height[j];
            temp = min(x,y) * l;
            if(x < y){
                temp = l * x;
                if(ans < temp){
                    ans = temp;
                }
                i++;
                l--;
                //continue;
            }
            else{
                temp = y * l;
                if(ans < temp){
                    ans = temp;
                }
                j--;
                l--;
                //continue;
            }
        }
        return ans;
    }
};

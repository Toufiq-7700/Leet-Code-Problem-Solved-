class Solution {
public:
    int findComplement(int num) {
        if(num == 1) return 0;
        if(num == 2) return 1;
        vector<int> binary;
        while(num>0){
            int x = num%2;
            binary.push_back(x);
            num /= 2;
        }
        int ans=0;
        int i=0,temp,cnt=0;
        reverse(binary.begin(), binary.end());

        for(int i=binary.size()-1; i>=0; i--){
           if(binary[i] == 1) temp = 0;
           else temp = 1;
           ans += temp * pow(2,cnt);
           cnt++;
        }
        
        
        return ans;
    }
};

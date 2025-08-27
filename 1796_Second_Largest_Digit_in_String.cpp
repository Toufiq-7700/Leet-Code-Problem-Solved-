class Solution {
public:
    int secondHighest(string s) {
        long long m1=-1;
        long long m2=-1;
       // m2 +=1;
        //m1 +=1;
        for(int i=0; i<s.length(); i++){
            if(s[i] <= '9' && s[i] >= '0'){
                long long temp = s[i]-'0';
                if(temp > m1){
                   m2 = m1;
                   m1 = temp;
                }
                else if(temp > m2 && m1 > temp) m2 = temp;
            }
        }
        long long ans;
        if(m2 != -1) ans = m2;
        
        return int(ans);
    }
};

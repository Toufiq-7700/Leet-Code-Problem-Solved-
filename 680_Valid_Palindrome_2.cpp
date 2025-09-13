class Solution {
public:
bool check(string s){
    int i=0; 
    int flag=1;
    int j=s.length()-1;
    while(i<=j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
            if(flag){
                flag=0;
                // check skip left
                int a=i+1, b=j;
                bool left=true;
                while(a<=b){
                    if(s[a]!=s[b]){ left=false; break; }
                    a++; b--;
                }
                // check skip right
                int c=i, d=j-1;
                bool right=true;
                while(c<=d){
                    if(s[c]!=s[d]){ right=false; break; }
                    c++; d--;
                }
                return left || right;
            }
            else return false;
        }  
    }
    return true;
}
    bool validPalindrome(string s) {
        int n = s.length();
        if(n==0 || n==1 || n==2) return true;

        return check(s);
    }
};

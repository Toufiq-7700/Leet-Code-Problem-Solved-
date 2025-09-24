class Solution {
public:
    string reverseWords(string s) {
        int i=0,j;
        int len = s.length();
        while(i<len){
            while(i < len && s[i] == ' ' )i++;
            j=i;
            while(j < len && s[j] != ' ')j++;

            int left=i, right=j-1;
            while(left < right){
                swap(s[left] , s[right]);
                left++;
                right--;
            }
            //j++; i++;
            i=j;
        }

        return s;
    }
};

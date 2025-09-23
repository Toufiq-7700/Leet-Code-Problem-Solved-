class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0, j=0;
        int n1=version1.length();
        int n2=version2.length();

        while(i<n1 || j<n2){
            int cnt1=0, cnt2=0;
            while(i<n1 && version1[i] != '.'){
                cnt1 = cnt1*10 + (version1[i]-'0');
                i++;
            }
            while(j<n2 && version2[j] != '.'){
                cnt2 = cnt2*10 + (version2[j]-'0');
                j++;
            }
            if(cnt1 > cnt2) return 1;
            if(cnt2 > cnt1) return -1;

            i++;
            j++;
        }
        return 0;
    }
};

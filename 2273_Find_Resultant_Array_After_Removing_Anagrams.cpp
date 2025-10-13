class Solution {
public:
bool helper(string a, string b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}
    vector<string> removeAnagrams(vector<string>& words) {

        for(int i=1; i<words.size(); i++){
            string a = words[i-1];
            string b = words[i];
            if(helper(a,b)){
                words.erase(words.begin()+i);
                i--;
            }
        }
        return words;
    }
};

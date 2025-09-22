class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;

    for (auto ch : s)
    {
        if (ch =='(' || ch  =='{' || ch =='[')
        {
            stck.push(ch);
        }
        else{   
                if(stck.empty() || ((stck.top() == '(') && (ch != ')')) || ((stck.top() == '{') && (ch != '}')) || ((stck.top() == '[') && (ch != ']'))) return false;
                stck.pop();
        }
    }
    return (stck.empty());
    }
};

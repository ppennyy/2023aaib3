class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int N=s.length();
        string s2=s+s;
        return s2.substr(1, N*2-2).find(s) != string::npos;
    }
};

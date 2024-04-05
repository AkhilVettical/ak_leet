class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        for(int i = 0; i < s.length() - 1; i++) {
            if(abs(s[i] - s[i+1]) == 32) {
                ans = s.substr(0, i) + s.substr(i + 2);
                s = ans;
                i=-1;
            }
                if(s.length()==0)
                break;
        }
        return s;
    }
};
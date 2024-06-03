class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j=0;
        if(s.size()==0)
         return true;
        for(i=0;i<t.size();i++)
        {
            if(s[j]==t[i])
              j++;
            if(j==s.size())
              return true;
        }
        return false;

        
    }
};
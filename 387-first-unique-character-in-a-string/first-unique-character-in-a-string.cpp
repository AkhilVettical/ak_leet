class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> charmap;
        for(int i=0;i<s.length();i++)
         charmap[s[i]]++;       
        for(int i=0;i<s.length();i++)
          if(charmap[s[i]]==1)
           return i;

        return -1;
    }
};
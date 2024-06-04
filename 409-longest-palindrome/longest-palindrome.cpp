class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        int ans=0;
        bool flag=false;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++)
          mp[s[i]]++;
        
        for(auto it:mp)
        {
            if(it.second % 2 !=0)
            {
                ans+=it.second-1;
                flag=true;
            }
            else 
               ans+=it.second;
        }
        if(flag)
         ans++;
        return ans;
    }
};
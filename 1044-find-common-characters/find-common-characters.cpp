class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector <int> final_count(26,0);
        for(auto it:words[0])
          final_count[it-'a']++;
        for(int i=1;i<n;i++)
        {
            vector<int> temp_count(26,0);
            for(auto it:words[i])
             temp_count[it-'a']++;
            for(int j=0;j<26;j++)
              final_count[j]=min(final_count[j],temp_count[j]);
        }
        vector <string> ans;
        for(int i=0;i<26;i++)
        {
            int cnt=final_count[i];
            while(cnt--)
              ans.push_back(string(1,i+'a'));
        }
        return ans;
    }
};
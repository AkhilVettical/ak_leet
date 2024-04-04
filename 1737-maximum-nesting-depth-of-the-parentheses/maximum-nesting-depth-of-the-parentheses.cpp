class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max_sum=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='(')
           {
            count+=1;
                if(count>max_sum)
                {
                    max_sum=count;
                }
           }
           if(s[i]==')')
             count-=1;
        }
        return max_sum;
    }
};
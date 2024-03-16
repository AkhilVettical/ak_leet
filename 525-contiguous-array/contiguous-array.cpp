class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      int n=nums.size();
      int sum=0;
      int max_len=0;
      unordered_map <int,int> table_sum;
      for(int i=0;i<n;i++)
      {
      sum+=nums[i]==0?-1:1;
      if(sum==0)
       max_len=i+1;
      else if(table_sum.find(sum)!=table_sum.end())
        max_len=max(max_len,i-table_sum[sum]);
      else 
        table_sum[sum]=i;
      }
      return max_len;
    }
};
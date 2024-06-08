class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector <int> prefix_sum(nums.size());
        vector <int> mod(nums.size());
        unordered_map <int,int> unmap;
        prefix_sum[0]=nums[0];
        mod[0]=prefix_sum[0]%k;
        if(mod[0]==0 && nums.size()==1)
         return false;
        
        for(int i=1;i<nums.size();i++)
        {
            prefix_sum[i]=prefix_sum[i-1]+nums[i];
            // if(nums[i]!=0)
              mod[i]=prefix_sum[i]%k;
        }
        if(mod[0]==0 && mod[1]==0)
         return true;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==0)
            {
                if(nums[i+1]==0)
                  return true;
            }
        }
        for(int i=0;i<nums.size();i++)
           unmap[mod[i]]=0;
        for(int i=0;i<nums.size();i++)
        {  
           if(i==1)
           {
             if(mod[i]==mod[i-1])
              continue;
           }
           if(i>=2)
           { 
              if(mod[i]==mod[i-1] && mod[i]!=mod[i-2])
                continue;
           }
           if(mod[i]==0 && nums[i]!=0 && i!=0)
            return true;
           if(unmap[mod[i]]==1)
            return true;
           unmap[mod[i]]++;
        }
        return false;  
    }
};
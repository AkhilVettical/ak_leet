class Solution {
public: 
    int partition(int ind,vector<int>& arr,int k,vector<int> &dp)
    {   
        int maxAns=INT_MIN;
        int maxi=INT_MIN;
        int sum=0,len=0,n=arr.size();
        if(ind==arr.size())
            return 0;
        if(dp[ind]!=-1)
           return dp[ind];
        for(int j=ind;j<min(ind+k,n);j++)
        {    
             len++;
             maxi=max(maxi,arr[j]);
             sum=len*maxi+partition(j+1,arr,k,dp);
             maxAns=max(maxAns,sum);
        }
        dp[ind]=maxAns;
        return maxAns;

    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> dp(n,-1);
        return partition(0,arr,k,dp);
    }
};
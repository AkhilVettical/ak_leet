class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++)
          sum+=nums[i];
        int max_sum=sum;
        int left=0;
        int right=k;
        while(right<nums.size())
        {
            sum=sum - nums[left]; // remove the left element
            left++; // increment left
            sum=sum + nums[right];
            right++; // increment right 
            max_sum=max(max_sum,sum);
        }
        return (double)max_sum/k;
    }
};
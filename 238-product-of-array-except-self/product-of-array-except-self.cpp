class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
        int l=nums.size();
        vector <int> answer(l);
        answer[0]=1;
        for(int i=1;i<l;i++)
            answer[i]=answer[i-1]*nums[i-1];
        int right=1;
        for(int i=l-1;i>=0;i--)
        {
            answer[i]*=right;
            right*=nums[i];
        }
        return answer;
    }
};

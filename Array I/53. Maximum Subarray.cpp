class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0],maxSum = nums[0];
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if((sum + nums[i]) > INT_MIN)
            {
                if(nums[i] > (sum + nums[i]))
                    sum = nums[i];
                else
                    sum += nums[i];
            }
            else
            {
                sum = INT_MIN;
            }
            
            if(sum > maxSum)
                maxSum = sum;
        }
        return maxSum;
    }
};

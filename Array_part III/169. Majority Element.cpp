class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0,ans;
        sort(nums.begin(),nums.end());
        if(n<=1){
            return nums[0];
        }
        for(int i=0;i<n-1;i++){
            int a=nums[i];
            if(nums[i]==nums[i+1]){
                count++;
                if(count>=n/2){
                    ans=nums[i];
                    break;
                }
            }
        }
        return ans;
    }
};

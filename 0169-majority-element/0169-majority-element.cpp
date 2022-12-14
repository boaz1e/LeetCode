class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate, n=nums.size(), count=1;
        candidate = nums[0];
        for(int i=1;i<n;i++)
        {
            if(count==0)
                candidate=nums[i];
                
            if(nums[i]==candidate)
                count++;
            else
                count--;
        }
        return candidate;
    }
};
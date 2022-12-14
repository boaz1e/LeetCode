class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int left,right, i;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(i=0;i<n;i++){
            left=i+1; right=n-1;
            if(i>0 && nums[i]==nums[i-1])
                continue;
            while(left<right){
                if(nums[i]+nums[left]+nums[right]==0){
                    ans.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    
                    while(left<right && nums[left]==nums[left+1])
                        left++;
                    while(left<right && nums[right]==nums[right-1])
                        right--;
                    left++;
                    right--;
                }
                else if(nums[i]+nums[left]+nums[right]<0)
                    left++;
                else
                    right--;
            }
        }
        return ans;
    }
};
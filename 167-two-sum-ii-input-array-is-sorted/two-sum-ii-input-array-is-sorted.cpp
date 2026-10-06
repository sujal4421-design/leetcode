class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int st = 0;
        int end = nums.size() - 1;
        
        while(st < end) {
            
            int currsum = nums[st] + nums[end];
            
            if(currsum == target) {
                return {st+1, end+1};
            }
            
            if(currsum > target) {
                end--;
            }
            else {
                st++;
            }
        }
        
        return {};
    }
};
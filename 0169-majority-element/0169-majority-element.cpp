class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int Len=nums.size();
        return(nums[Len/2]);
        
    }
};
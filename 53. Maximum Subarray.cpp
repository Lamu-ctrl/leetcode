class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> vec(nums.size());
        vec[0]=nums[0];
        for(int i=1 ; i<nums.size() ; i++){
            vec[i]=max(nums[i] , vec[i-1]+nums[i]);
        }
        return *max_element(vec.begin(),vec.end());
    }
};

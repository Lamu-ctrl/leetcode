class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=nums[0] , maxsum=nums[0],minsum=nums[0];
        int curmax=nums[0], curmin=nums[0];
        for(int i=1 ; i<nums.size() ; ++i){
            total+=nums[i];
            curmax=max( curmax +nums[i] ,nums[i]);
            maxsum=max( curmax ,maxsum);
            curmin=min( curmin +nums[i] ,nums[i]);
            minsum=min( minsum ,curmin);
        }
        //consider all negative situation, maxsum will be small than 0;
        return maxsum>0 ? max(maxsum,total-minsum) : maxsum ;        
    }
};

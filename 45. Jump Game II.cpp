class Solution {
public:
    int jump(vector<int>& nums) {
        int res=0,range=0,n=nums.size(),i=0;
        while(range<n-1){
            res++;
            int pre=range;
            for(;i<=pre;i++){
                range=max(range, i+nums[i]);
            }
        }
        return res;
    }
};

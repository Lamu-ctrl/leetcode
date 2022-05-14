class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int curmax=nums[0] , curmin=nums[0] , ans=nums[0];
        for(int i=1;i<nums.size() ; i++){
            if(nums[i]==0){
                curmax=1;
                curmin=1;
                ans=max(ans,0);//[-1,0] ans=0
            }
            else{
                int temp=nums[i]*curmax;
                curmax=max( nums[i]*curmax , max(nums[i]*curmin , nums[i] ) );
                curmin=min( temp , min(nums[i]*curmin , nums[i] ) );     
                ans=max(ans,curmax);
            }
        }
        return ans;
    }
};

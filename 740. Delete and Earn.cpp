class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int > sums(10001);
        for(int num: nums) sums[num]+=num;
        for(int i=2 ; i<10001;i++){
            sums[i]=max(sums[i-1] , sums[i-2]+sums[i]);
        }
        return sums[10000];
    }
};

/*
Constraints:
1 <= nums.length <= 2 * 104
1 <= nums[i] <= 104
*/

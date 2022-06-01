class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> map; //pos , index
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(map.find(target-nums[i])==map.end() ){
                map[nums[i]]=i;
            }
            else{
                return{map.find(target-nums[i])->second,i};
            }
        }
        return {};
    }
};

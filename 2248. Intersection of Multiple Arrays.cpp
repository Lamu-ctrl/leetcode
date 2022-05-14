class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        map<int,int> map;
        const int n=nums.size(); 
        for(int i=0 ; i<n ; i++){
            for(int j=0; j<nums[i].size() ; j++){
                map[nums[i][j]]++;
            }
        }
        for(auto t:map){
            if(t.second == n)   ans.push_back(t.first);  
        }
        return ans;
    }
};

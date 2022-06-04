class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        for(auto t:intervals){
            if(res.size()==0 || res.back()[1] < t[0]){
                res.push_back(t);
            }
            else{
                res.back()[1]=max(res.back()[1],t[1]);
            }
        }
        return res;
    }
};

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int last=0;
        int res=0;
        int n=intervals.size();
        sort(intervals.begin() , intervals.end());
        for(int i=1;i<n ;i++){
            if(intervals[last][1]<=intervals[i][0]){  
                //  ---
                //       ---
                last=i;
            }
            else{
                //  overlapping and over old one -> remove over one case2
                //  overlapping and included in old one -> remove old one case1
                if(intervals[last][1]>=intervals[i][1]){
                    last=i;
                }
                res++;
            }
        }
        return res;
        
    }
};

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        int res=1;
        if(n==0) return 0;
        sort(points.begin(),points.end());    
        int  right=points[0][1];      
        for(int i=1;i<n;i++){
            if(right >= points[i][0]){
                right=min(right,points[i][1]);
            }
            else{
                right=points[i][1];
                res++;
            }
        }
        return res;
    }
};

/*
Constraints:

1 <= points.length <= 105
points[i].length == 2
-231 <= xstart < xend <= 231 - 1
*/

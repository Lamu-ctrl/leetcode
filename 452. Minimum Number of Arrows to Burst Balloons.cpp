class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        int res=0;
        if(n==0) return 0;
        sort(points.begin(),points.end());    
        int left=points[0][0] , right=points[0][1];      
        for(int i=1;i<n;i++){
            if(right >= points[i][0]){
                right=min(right,points[i][1]);
                left=max(left,points[i][0]);
            }
            else{
                left=points[i][0];
                right=points[i][1];
                res++;
            }
        }
        return res+1;
    }
};

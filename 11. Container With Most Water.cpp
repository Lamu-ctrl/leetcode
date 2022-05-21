class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int res=0;
        while(right>=left){
            if(height[right]>height[left]){
                res=max(res, (right-left)*height[left] );
                left++;
            }
            else{
                res=max(res, (right-left)*height[right] );
                right--;                
            }
        }
        return res;
    }
};

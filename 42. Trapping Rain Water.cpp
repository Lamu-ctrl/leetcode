class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0;
        int lb=height[left];
        int right=n-1,rb=height[right];
        int res=0;
        while(right>left){
            if(lb<=rb){
                left++;
                lb=max(lb,height[left]);
                res+=lb-height[left];        
            }
            else{
                right--;
                rb=max(rb,height[right]);
                res+=rb-height[right]; 
            }
        }
        return res;
    }
};

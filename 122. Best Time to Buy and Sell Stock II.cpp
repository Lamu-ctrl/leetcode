class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector <int> vec(n);
        int res=0;
        int dif=0;
        for(int i=1; i<n;i++){
            dif=prices[i]-prices[i-1];
            if(dif>=0){
                vec[i]=vec[i-1]+dif;   
            }
            else{
                vec[i]=0;
                res+=vec[i-1];
            }
        }
        if(vec[n-1]>=0){
            res+=vec[n-1];
        }
        return res;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector <int> vec(n,0);
        for(int i=1;i<n;i++){
            vec[i]=max( vec[i-1]+prices[i]-prices[i-1],0);
        }
        return *max_element(vec.begin(),vec.end() );
    }
};

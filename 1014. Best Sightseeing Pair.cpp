class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        const int n=values.size();
        vector<int> vec(n);
        vector<int> acum(n);
        vec[0]=values[0];
        acum[0]=0;
        for(int i=1;i<n;i++){
            acum[i]=max(acum[i-1],vec[i-1]+values[i]-i);
            vec[i]=max( vec[i-1] , values[i]+i );            
        }
        return acum[ n-1 ];
    }
};

class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        int n=stockPrices.size();
        int res=1;
        if(n==1){
            return 0;
        }
        if(n==2){
            return 1;
        }
        sort(stockPrices.begin(),stockPrices.end());
        long double la= (long double)(stockPrices[1][1]-stockPrices[0][1] ) / (long double)(stockPrices[1][0]-stockPrices[0][0]) ;
        for(int i=2;i<n;i++){
            long double cu=(long double)(stockPrices[i][1]-stockPrices[i-1][1]) / (long double)( stockPrices[i][0]-stockPrices[i-1][0] );     
            //cout<<"last slope "<<la <<"  cur slope  "<<cu<<endl;
            if(la != cu ){
                res++;
                cout<<"res ++   "<<res<<endl;
                la=cu;            
            }
        }
        return res;
    }
};

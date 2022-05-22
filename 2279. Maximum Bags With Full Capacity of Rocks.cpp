class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        map<int,int> map; // diftofull , #
        int res=0;
        for(int i=0;i<n ;i++){
            map[capacity[i]-rocks[i] ] ++ ;
        }
        for(auto it:map){
            //cout<<it.first<<"fi  se"<<it.second<<"  rock"<<additionalRocks<< "  "<<res<<endl;
            if(it.first == 0 ){
                res+=it.second;
            }
            else{
                if(it.first * it.second <= additionalRocks){
                    additionalRocks -=  it.first * it.second;
                    res+= it.second;
                }
                else{
                    res+= additionalRocks / it.first;
                    //cout<<" res+= additionalRocks % it.first; "<<additionalRocks / it.first<<endl;
                    return res;
                }
            }
        }
        return res;
        
    }
};

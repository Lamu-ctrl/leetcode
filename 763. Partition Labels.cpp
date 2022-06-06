class Solution {
public:
    vector<int> partitionLabels(string s) {
        map <char,pair<int,int> > map ; // char , pair{left right}
        // like max indep. interval;
        int n=s.length();
        for(int i=0;i<n; i++){
            if(map.find(s[i])==map.end() ){
                map[s[i]]= {i,i};
            }
            else{
                if(map[s[i]].second<i){
                    map[s[i]].second=i;
                }                
            }
        }
        vector<pair<int,int> > vec;
        for(auto t:map){
            //cout<<t.second.first<<"  "<<t.second.second<<endl;
            vec.push_back( t.second );
        }
        sort(vec.begin(),vec.end());
        
        vector<pair<int,int>> res;
        for(int i=0;i<vec.size();i++){
            if(i==0 || vec[i].first > res.back().second){
                //cout<<vec[i].first<<"  "<<vec[i].second<<endl;
                res.push_back(vec[i]);
            }
            else{      
                res.back().second=max(res.back().second , vec[i].second );
            }
        }
        vector<int> rres;
        for(auto tt:res){
            rres.push_back(tt.second - tt.first+1 );
        }
        return rres;
    }
};

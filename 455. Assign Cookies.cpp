class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int fulfill=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child=0;
        int const childmax=g.size();
        for(int j=0; j< s.size();j++){
            //cout<<"chi j  "<<child<<"  "<<j<<"  g[child] s[j]:"<<g[child]<<" "<<s[j]<<endl;
            if(child < childmax){
                if(g[child]<=s[j]){
                    fulfill++;
                    child++;                    
                }
            }
        }
        return fulfill;
    }
};

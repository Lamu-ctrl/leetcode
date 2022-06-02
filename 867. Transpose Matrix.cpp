class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int x=matrix.size();
        if(x!=0){
            int y=matrix[0].size();
            vector<vector<int>> vec(y);
            for(auto &t:vec){
                t.resize(x,0);
            }
            for(int i=0;i<x;i++){
                for(int j=0;j<y;j++){
                    vec[j][i]=matrix[i][j];
                }      
            }       
            return vec;
        }        
        return {};    
    }
};

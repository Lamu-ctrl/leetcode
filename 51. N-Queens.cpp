class Solution {
public:
    vector<vector<string>> res;
    int nn;
    
    vector<vector<string>> solveNQueens(int n) {
        nn=n;
        vector<string> tem(n);
        for(auto &t:tem){
            for(int i=0;i<n;i++){
                t+=".";
            }
        }
        traverse(tem , 0);
        return res;
    }
    
    void traverse(vector<string> matrix , int now){
        for(int i=0;i<nn;i++){
            if( vaild(matrix,now,i)==1){
                matrix[now][i]='Q';
                if(now==nn-1){
                    res.push_back(matrix);
                }
                else{
                    traverse(matrix,now+1);   
                }
                matrix[now][i]='.';
            }
        }
    }
    bool vaild(vector<string> matrix,int now,int x){
        int r=x-1,l=x+1;
        for(int i=now-1 ; i>=0 ; i--,r--,l++){
            if(r>=0){
                if(matrix[i][r]=='Q')
                    return false;
            }
            if(l<=nn-1 ){
                if(matrix[i][l]=='Q'){
                    return false;
                }
            }
            if(matrix[i][x]=='Q'){
                return false;
            }
        }
        return true;
    }
};

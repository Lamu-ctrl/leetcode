/*
1. 简单的思路，如何想到这个解法的:最主要是之前寫過算單一島嶼面積的題目   
走過每一個單元 遇到1算面積(四方向看相鄰大小)->紀錄最大面積 ， 繼續往下走 走到底結束。
2. 该解法的时空复杂度:time : O(m*n) , space: O(1)
3. 从阅读题目到 AC 的所需时间 11min 0522watch - 0523 coding - 0533 AC
*/
class Solution {
public:
    int res=0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int j=0;j<grid.size();j++){
            for(int i=0;i<grid[0].size();i++){
                if(grid[j][i]==1){
                    int area=0;
                    res=max( dfs( grid,j,i) , res ) ;
                }
            }
        }
        return res;
    }
    int dfs(vector<vector<int>>& grid,int j,int i){
            grid[j][i]=0;
            int area=1; 
            if(j+1<grid.size() ){
                if(grid[j+1][i]==1)
                    area+=dfs(grid,j+1,i);
            }
            if(j-1>=0){
                if(grid[j-1][i]==1)
                    area+=dfs(grid,j-1,i);
            }        
            if(i+1<grid[0].size()){
                if(grid[j][i+1]==1)
                    area+=dfs(grid,j,i+1);
            }
            if(i-1>=0){
                if(grid[j][i-1]==1)
                    area+=dfs(grid,j,i-1);
            }
            return area;
    }
    
};

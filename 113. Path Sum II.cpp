/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> res;
    int target=0;
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        target=targetSum;
        if(root!=NULL)
            dfs(root,0,{});
        return res;
    }
    
    void dfs(TreeNode* root,int total , vector<int> vec){
        
        total+=root->val;
        vec.push_back(root->val);

        if(root->left == NULL && root->right == NULL ){
            if(total==target){
                res.push_back(vec);
            }            
        }
        else {
            if(root->left != NULL){
                dfs(root->left,total,vec);
            }
            if(root->right != NULL){
                dfs(root->right,total,vec);
            }            
        }

    }
};

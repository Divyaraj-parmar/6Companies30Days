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
    void preOrder(TreeNode* r, vector<int> &path){
        if(!r) return;
        path.push_back(r->val);
        preOrder(r->left,path);
        preOrder(r->right,path);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        preOrder(root1,ans);
        preOrder(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == nullptr) return {};
        if (root->left == nullptr && root->right == nullptr) return {{root->val}};
        
        // bfs 
        queue<TreeNode*> q;
        q.push(root);
        
        vector<int> tmp;
        while(!q.empty()) {
            int qs = q.size();
            for (int i = 0; i < qs; i++) {
                TreeNode *cur = q.front();
                q.pop();
                tmp.push_back(cur->val);
                if (cur->left) {
                    q.push(cur->left);
                }
                if (cur->right) {
                    q.push(cur->right);
                }
            }
            res.push_back(tmp);
            tmp.clear();
        }
        return res;
    }
};
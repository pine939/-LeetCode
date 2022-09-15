/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *answer;
        if (((p->val <= root->val) && (root->val <= q->val)) || ((q->val <= root->val) && (root->val <= p->val))) {
            answer = root;
        }
        
        if ((p->val < root->val) && (q->val < root->val)) {
            answer = lowestCommonAncestor(root->left, p, q);
        }
        if ((p->val > root->val) && (q->val > root->val)) {
            answer = lowestCommonAncestor(root->right, p, q);
        }
        
        return answer;
    }
};
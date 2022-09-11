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
  void inOrder(TreeNode* root) {
      if (root == nullptr) return;
      inOrder(root->left);
      tree.push_back(root->val);
      inOrder(root->right);
  }
    
  bool isValidBST(TreeNode* root, long min = LONG_MIN, long max = LONG_MAX) {
      inOrder(root);
      
      for (int i = 1; i < tree.size(); i++) {
          if (tree[i] <= tree[i-1]) {
              return false;
          }
      }
      return true;
  }
    
private:
    vector<int> tree;
};


/*
// Recursive
class Solution {
public:
  bool isValidBST(TreeNode* root, long min = LONG_MIN, long max = LONG_MAX) {
      if (root == nullptr) {
          return true;
      }

      if (root->val <= min || root->val >= max) {
          return false;
      }
      
      return isValidBST(root->left, min, root->val) && isValidBST(root->right, root->val, max);
  }
};
*/
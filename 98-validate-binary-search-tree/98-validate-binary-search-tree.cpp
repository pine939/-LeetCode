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
  bool isValidBST(TreeNode* root, long min = LONG_MIN, long max = LONG_MAX) {
      if (root == nullptr) {
          return true;
      }
      
      if (root->val <= min || root->val >= max) {
          return false;
      }
      
      return (isValidBST(root->left, min, root->val) && isValidBST(root->right, root->val, max));
  }
};

      /*
      std::cout << root->val << std::endl;
      std::cout << min << std::endl;
      std::cout << max << std::endl;
      
      
      std::cout << root->left->val << std::endl;
      std::cout << root->right->val << std::endl;
      */
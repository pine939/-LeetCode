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
      std::cout << "root->val: " << root->val << std::endl;
      std::cout << "min: " << min << std::endl;
      std::cout << "max: " << max << std::endl;
      std::cout << "------" << std::endl;
      if (root->val <= min || root->val >= max) {
          return false;
      }
      
      return isValidBST(root->left, min, root->val) && isValidBST(root->right, root->val, max);
  }
};


/*
1. TreeNode를 vector에 넣는다. 
2. vector를 순회하면서 판단한다.

///

min, max로 뭔가 넘겨서 비교한다...?

root->val vs min
root->val vs max 

return false되는 상황
root->val > max
root->val < min

if (root == nullptr) {
  return true;
}

if (root->val <= min || root->val >= max) {
  return false;
}

return isValidBST(root->left, min, root->val) && isValidBST(root->right, root->val, max);

*/
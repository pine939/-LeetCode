/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void traversal(Node *root, vector<int> &res) {
        if (root == nullptr) return;
        
        res.push_back(root->val);
        for (Node *node : root->children) {
            traversal(node, res);
            // traversal(root->children, res);
            // traversal(root->children->children, res);
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> res;
        traversal(root, res);
        return res;
        /*
        std::cout << root->val << std::endl;
        
        std::cout << root->children[0]->val << std::endl;
        std::cout << root->children[0]->children[0]->val << std::endl;
        std::cout << root->children[0]->children[1]->val << std::endl;
        
        std::cout << root->children[1]->val << std::endl;
        
        std::cout << root->children[2]->val << std::endl;
        */
        
    }
};
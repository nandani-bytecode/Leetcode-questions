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
// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(p->val != q->val) return false;
//         else if(p == NULL && q== NULL) return true;
//         return isSameTree(p->left , q->left);
//         return isSameTree(p->right, q->right);
        
//     }
// };
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Case 1: both null
        if (p == nullptr && q == nullptr) return true;

        // Case 2: one null, one not
        if (p == nullptr || q == nullptr) return false;

        // Case 3: values differ
        if (p->val != q->val) return false;

        // Case 4: check both subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

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
//     int finalPath(TreeNode* node,int path){
//         if(node == NULL) return 0;
        
//         int lh = finalPath(node->left,node->left->val);
//         int rh = finalPath(node->right,node->right->val);
        
//         return path + max(lh , rh);
//     }
//     int maxPathSum(TreeNode* root) {
//         return finalPath(root , 0);
//     }
// };

class Solution {
public:
    int maxSum = INT_MIN;

    int finalPath(TreeNode* node) {
        if(node == NULL) return 0;

        // compute max gain from left and right
        int lh = max(0, finalPath(node->left));
        int rh = max(0, finalPath(node->right));

        // update global max with path through this node
        maxSum = max(maxSum, node->val + lh + rh);

        // return max gain to parent
        return node->val + max(lh, rh);
    }

    int maxPathSum(TreeNode* root) {
        finalPath(root);
        return maxSum;
    }
};

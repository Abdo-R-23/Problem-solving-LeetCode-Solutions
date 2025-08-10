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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == NULL) return 0; // لو الشجرة فاضية أو وصلنا لفرع فارغ
    
    // لو قيمة العقدة الحالية أقل من low → مش هتضيفها، وهتروح بس لليمين
    if (root->val < low) {
        return rangeSumBST(root->right, low, high);
    }
    
    // لو قيمة العقدة الحالية أكبر من high → مش هتضيفها، وهتروح بس لليسار
    if (root->val > high) {
        return rangeSumBST(root->left, low, high);
    }
    
    // لو قيمة العقدة بين low و high → هتضيفها وتكمل على اليمين واليسار
    return root->val 
           + rangeSumBST(root->left, low, high) 
           + rangeSumBST(root->right, low, high);
        
    }
};
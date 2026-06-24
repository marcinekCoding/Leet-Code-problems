/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool compare(struct TreeNode *tree1, struct TreeNode *tree2)
{
    if (tree1 == null && tree2 == null)
    {
        return true;
    }
    else if (tree1 == null || tree2 == null)
    {
        return false;
    }
    else if (tree1->val != tree2->val)
    {
        return false;
    }
}
bool isSymmetric(struct TreeNode *root)
{
    bool val = true;
    struct TreeNode *tree1 = root->left;
    struct TreeNode *tree2 = root->right;
    // rekurencja
    bool bool1 = compare(tree1->left, tree2->right);
    bool bool2 = compare(tree1->right, tree2->left);
    return bool1 && bool2;
}

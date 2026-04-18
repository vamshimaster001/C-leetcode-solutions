bool issametree(struct TreeNode* root1,struct TreeNode* root2)
{ 
    if(root1 == NULL && root2 == NULL)
        return true;
    if(root1 == NULL || root2 == NULL)
        return false;
    if(root1->val != root2->val)
        return false;
    return issametree(root1->left , root2->right) && issametree(root1->right, root2->left);

}


bool isSymmetric(struct TreeNode* root) {
    return issametree(root, root);
}

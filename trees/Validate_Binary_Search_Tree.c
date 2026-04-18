
bool isValidBST(struct TreeNode* root) {

    if(root == NULL)
        return true;

    struct TreeNode stack[10000];
    int top = -1;
    stack[++top] = (TreeNode){root,NULL,NULL};

    while(top >= 0)
    {
        struct TreeNode curr = stack[top--];
        struct TreeNode *ptr = curr.root;

        if((curr->left != NULL && curr->val <= curr->left->val) || (curr->right != NULL && curr->right->val))
        return false;

        if(curr->left)
            stack[++top] = curr->left;
        
        if(curr->right)
            stack[++top] = curr->right;
         
    }
  return true;
}

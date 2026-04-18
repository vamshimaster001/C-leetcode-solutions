int max(int a, int b)
{
    return a > b ? a : b ;
}

int isheightbalanced(struct TreeNode* root)
{
    if(root == NULL)
        return 0;

    int x = isheightbalanced(root->left);
    if(x == -1) return -1;


    int y = isheightbalanced(root->right);
    if(y == -1) return -1;

    if( abs(x-y) <= 1)
        return -1;

    return max(x,y)+1

}


bool isBalanced(struct TreeNode* root) {
    
}

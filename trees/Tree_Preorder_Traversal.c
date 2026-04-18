void nodecount(struct TreeNode* root, int *count) {
    
    if(root == NULL)
    {
        return;
    }
    
    (*count)++;
    
    nodecount(root->left, count);
    
    nodecount(root->right, count);

}


void printinorder(struct TreeNode* root,int *ptr,int *count)
{
        
    if(root == NULL)
        return;
    
    ptr[(*count)] = root->val;
    
    (*count)++;
    
    printinorder(root->left,ptr,count);
        
    printinorder(root->right,ptr,count);
    
}
   

int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    
    int count = 0;
    
    nodecount(root, &count);
    
    *returnSize = count;
    
    int ptr = (int *) malloc(count*sizeof(int));
    
    count = 0;
        
    printinorder(root,ptr,&count);
    
  return ptr;
}

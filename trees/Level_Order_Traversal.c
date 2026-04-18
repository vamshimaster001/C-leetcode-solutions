int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {

    if(root == NULL) return NULL;

    int **res = malloc(sizeof(int *)*2000);
    *returnColumnSizes = malloc(sizeof(int)*2000);
    *returnSize = 0;

    struct TreeNode* queue[10000];
    int front = 0, rear = 0;
    queue[rear++] = root;

    int level = 0;
    while(rear > front)
    {
        int levelsize = rear-front;
        (*returnColumnSizes)[level] = levelsize;
        res[level] = malloc(sizeof(int)*levelsize);

        for(int i = 0; i < levelsize ; i++)
        {
            struct TreeNode *curr = queue[front++];

            res[level][i] = curr->val;

            if(curr->left)
                queue[rear++] = curr->left;
            
            if(curr->right)
                queue[rear++] = curr->right;

        }

        level++;

    }
  *returnSize = level;
  return res;
}

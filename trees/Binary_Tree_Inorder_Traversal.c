nodecount(struct TreeNode* root, int *count) {

  if(root == NULL)
    {
      return;
    }

  (*count)++;

  nodecount(root->left, count);

  nodecount(root->right, count);
}


int* inorderTraversal(struct TreeNode* root, int* returnSize)
{

  if(root == NULL)
    return NULL;

  struct StackNode* root1 = NULL;

  struct TreeNode* x;

  int count = 0;

  nodecount(root, &count);

  *returnSize = count;

  int *ptr = (int *) malloc(count*sizeof(int));

  struct TreeNode* curr = root ;

  int i=0;

  while(curr != NULL || !isEmpty(root1))
    {
      while(curr != NULL )
	{
	  push(&root1, curr);

	  curr = curr->left;
	}

      curr = pop(&root1);

      ptr[i] = curr->val;

      curr = curr->right;

      i++;
    }

  return ptr;
}

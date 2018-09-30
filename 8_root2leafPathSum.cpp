#include <bits/stdc++.h>
using namespace std;
#define nodeptr node *
struct node
{
    int data;
    nodeptr left;
    nodeptr right;
};

nodeptr newnode(int data)
{
    nodeptr nptr = new node;
    nptr->data = data;
    nptr->left = nptr->right = NULL;
    return nptr;
}

bool hasPathSum(nodeptr root, int sum)
{
    if (root == NULL)
    {
        return (sum == 0);
    }
    else
    {
        bool ans = 0;
        int subSum = sum - root->data;
        if (subSum == 0 && root->left == NULL && root->right == NULL)
            return 1;

        if (root->left)
            ans = ans || hasPathSum(root->left, subSum);
        if (root->right)
            ans = ans || hasPathSum(root->right, subSum);
        return ans;
    }
}

int main()
{

    int sum = 21;

    /* Constructed binary tree is 
            10 
          /   \ 
        8      2 
      /  \    / 
    3     5  2 
  */
    struct node *root = newnode(10);
    root->left = newnode(8);
    root->right = newnode(2);
    root->left->left = newnode(3);
    root->left->right = newnode(5);
    root->right->left = newnode(2);

    if (hasPathSum(root, sum))
        printf("There is a root-to-leaf path with sum %d", sum);
    else
        printf("There is no root-to-leaf path with sum %d", sum);

    getchar();
    return 0;
}
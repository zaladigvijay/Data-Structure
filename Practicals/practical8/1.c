#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
};
struct node* create(int val)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=val;
	tmp->right=tmp->left=NULL;
	return tmp;
}
int main()
{
	struct node *root;
	root=create(15);
	
	root->left=create(10);
	root->right=create(19);

	 root->left->left=create(5);
	root->left->right=create(12);

	root->right->left=create(17);
	root->right->right=create(22);
	
	
}

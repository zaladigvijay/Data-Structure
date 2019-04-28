#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
};
struct node * findmin(struct node *root)
{
	while(root->left != NULL )
	{
		root=root->left;
	}
	return root;
}
struct node* createnode(int val)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=val;
	tmp->right=tmp->left=NULL;
	return tmp;
}
struct node * createtree(struct node *root,int val)
{
	if(root!=NULL)
	{
		printf("Tree already exists");
	}
	else
	{	
		root=createnode(val);
		return root;
	}	
}
struct node * insert(struct node *root,int val)
{
	if(root == NULL)
	{
		root=createnode(val);
		return root;
	}
	else if(root->data > val)
	{
		root->left=insert(root->left,val);
	}	
	else if(root->data<= val)
	{
		root->right=insert(root->right,val);
	}
}
int search(struct node *root,int val)
{
	int f=0;
	while(root!=NULL)
	{
		if(root->data == val )
		{
			f=1;
			break;
		}
		else if(root->data > val)
		{
			root=root->left;
		}
		else if(root->data < val )
		{
			root=root->right;
		}
	} 
	return f;
}
struct node * delete(struct node *root,int val)
{
	struct node* parent=NULL;
	if(root==NULL)
		return root;
	if(root->data > val )
	{	
		root->left=delete(root->left,val);
	}
	else if(root->data < val)
	{
		root->right=delete(root->right,val);
	}
	else
	{

		if(root->right == NULL)
		{
			parent=root->left;
			free(root);
			root=parent;
			return root;
		}
		else if(root->left == NULL)
		{
			parent=root->right;
			free(root);
			root=parent;
			return root;
		}
		else
		{
			struct node *min=findmin(root->right);
			root->data=min->data;
			root->right=delete(min,min->data);
		}
	}
	return root;

}
int menu()
{
	int ch;
	printf("\n\n----menu----\n\n");
	printf("1.create tree \n");
	printf("2.Insert value in tree \n");
	printf("3.INOrder traversal\n");
	printf("4.Postorder traversal \n");
	printf("5.Preorder traversal \n");
	printf("6.search value  in tree\n");
	printf("7.delete value from tree\n");
	printf("8.exit \n");
	
	printf("Enter choice  : ");
	scanf("%d",&ch);
	return ch;
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		
		postorder(root->right);
		printf("%d\t",root->data);
	}
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);	
		preorder(root->right);
	}
}
int main()
{
	int val;
	struct node * root=NULL;
	while(1)
	{
		
		switch(menu())
		{
			case 1:
				if(root!=NULL)
					printf("Tree already exists\n");
				
				else
				{	
					printf("Enter value of root node : ");
					scanf("%d",&val);
					root=createtree(root,val);					
				}
				break;
			case 2:
				printf("Enter value of insert in tree : ");
				scanf("%d",&val);
				root=insert(root,val);
				break;
			case 3:
				printf("Inorder traversal \n \n");
				inorder(root);
				break;
			case 4:
				printf("Postorder traversal \n \n");
				postorder(root);
				break;
			case 5:
				printf("Preorder traversal \n \n");
				preorder(root);
				break;
			case 6:
				printf("Enter value fro search  in tree : ");
				scanf("%d",&val);
				if(search(root,val))
					printf("\n%d value is available in tree ",val);
				else
					printf("\n%d value is not available in tree ",val);		
				break;
			case 7:
				printf("Enter value for delete ");
				scanf("%d",&val);
				root=delete(root,val);
				break;
			case 8:
				exit(0);
				break;
		}
	}
}

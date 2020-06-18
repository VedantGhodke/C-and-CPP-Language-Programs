#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
	struct node *father;
} node;

node *create()
{
	node *p;
	int x;
	printf("Enter data( Enter -1 for no data):");
	scanf("%d",&x);

	if(x==-1)
		return NULL;

	p=(node*)malloc(sizeof(node));
	p->data=x;

	printf("Enter left child of %d:\n",x);
	p->left=create();

	printf("Enter right child of %d:\n",x);
	p->right=create();

	return p;
}

void preorder(node *t)
{
	if(t!=NULL)
	{
		printf("\n%d",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}

void inorder(node *t)
{
	if(t!=NULL)
	{
	    inorder(t->left);
		printf("\n%d",t->data);
		inorder(t->right);
	}
}

void postorder(node *t)
{
	if(t!=NULL)
	{
	    postorder(t->left);
		postorder(t->right);
		printf("\n%d",t->data);
	}
}


int main()
{
	node *root;
	root=create();
	printf("\n The Preorder traversal of tree is : ");
	preorder(root);
	printf("\n The Inorder traversal of tree is : ");
	inorder(root);
    printf("\n The Postorder traversal of tree is : ");
	postorder(root);

	return 0;
}

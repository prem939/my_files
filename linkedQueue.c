#include <stdio.h>
#include <stdlib.h>

struct ex
{
	int data;
	struct ex* link;
};

struct ex* insert(struct ex*,int );
void display(struct ex*);
void replace(struct ex**);
int f=-1,r=-1;
//struct ex* root1=NULL;
//struct ex* root2=NULL;

void main()
{
	struct ex* p=NULL;

	p=insert(p,100);
	p=insert(p,200);
	p=insert(p,300);
	p=insert(p,400);
	
	display(p);
	printf("\n");
	
	replace(&p);
	replace(&p);
	
	display(p);
}

struct ex* insert(struct ex* root1,int x)
{
	struct ex* p=root1;
	
	//struct ex* temp=root;
	
	if(root1==NULL)
	{
		root1=(struct ex*)malloc(sizeof(struct ex*));
		root1->data=x;
		root1->link=NULL;
		return root1;	
	}
	
	while(root1->link!=NULL)
	root1=root1->link;
	
		root1->link=(struct ex*)malloc(sizeof(struct ex*));
		root1->link->data=x;
		root1->link->link=NULL;
		
		return p;
}

void display(struct ex* p)
{
	//struct ex* p=root1;
	while(p!=NULL)
	{
		printf("ct=%p   data=%d   nt=%p\n",p,p->data,p->link);
		p=p->link;
	}
}
	
void replace(struct ex** p)
{
	struct ex* temp=*p;
	
	while(temp->link!=NULL)
	{
		if(temp->link!=NULL)
		temp->data=temp->link->data;
		temp=temp->link;
	}
//	temp->link=NULL;
	free(temp);
}		

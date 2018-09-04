struct ex
{
	int data;
	struct ex *node;
};

struct ex* creatnode(struct ex*,int);
void display(struct ex*);
struct ex* reverse(struct ex*);

#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct ex *a=NULL;
	
	a = creatnode(a,100);
	a = creatnode(a,200);
	a = creatnode(a,300);
	a = creatnode(a,400);

	display(a);
	printf("\n");
	
	struct ex *b;
	b=reverse(a);

	display(b);
}

struct ex* creatnode(struct ex* p,int x)
{
	struct ex* temp=p;

	if(p==NULL)
	{
		p=(struct ex*)malloc(sizeof(struct ex));

		p->data=x;
		p->node=NULL;
		
		return p;
	}
	
	while(p->node!=NULL)
	p=p->node;

	p->node=(struct ex*)malloc(sizeof(struct ex*));

	p->node->data=x;
	p->node->node=NULL;
	
	return temp;
}

void display(struct ex* p)
{
	while(p!=NULL)
	{
		printf("ct=%p data=%d  nt=%p\n",p,p->data,p->node);
		p=p->node;
	}
}
struct ex* reverse(struct ex *p)
{
	struct ex* curr=p;
//	struct ex* temp1=p;
	struct ex* prev=NULL;
	struct ex* next=NULL;
	
	while(curr!=NULL)
	{
		next=curr->node;
		curr->node=prev;
	
		prev=curr;
		curr=next;
	}
	
	return p;
}
	
		
		
		
		

	


struct ex
{
	int data;
	struct ex *next;
};

void dispaly(struct ex*);
struct ex* creatnode(struct ex*,int);
struct ex* delet(struct ex*,int);
#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct ex *a=NULL;
	int n;
	
	a=creatnode(a,100);
	a=creatnode(a,200);
	a=creatnode(a,300);
	a=creatnode(a,400);
	
	display(a);
	
	printf("enter the no to delet ");
	scanf("%d",&n);
	delet(a,n);
	
	display(a);
}

struct ex* creatnode(struct ex *p,int x)
{
	struct ex* tem=p;
	
	if(p == NULL)
	{
		p = (struct ex *)malloc(sizeof(struct ex));
		
		p -> data = x;
		p -> next = NULL;
		
		return p;
	}
		
	else
	{
		while( p->next!=NULL)
		p=p->next;
		
		p->next = (struct ex*)malloc(sizeof(struct ex));
		p -> next -> data = x;
		p -> next -> next = NULL;
		
		return tem;
	}
}

void display(struct ex *p)
{
	while(p!=NULL)
	{
		printf("ct=%p    data=%d   nt=%p\n",p,p->data,p->next);
		p=p->next;
	}
	printf("\n");
}

struct ex *delet(struct ex *p,int x)
{
	struct ex *dl;
	struct ex *temp=p;

	if(p->data==x)
	{
		dl=p;
		p=p->next;
		free(dl);
		return p;
	}
		while(p -> next -> data != x)
		p=p->next;
	
		dl=p->next;
		p->next=p->next->next;
		free(dl);
	
		return temp;
}

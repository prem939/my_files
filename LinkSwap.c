#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* link;
};

struct node* insert(struct node* ,int);
void display(struct node* );
struct node* swap(struct node*);

void main()
{
	struct node* r=NULL;
	
	r=insert(r,100);
	r=insert(r,200);
	r=insert(r,300);
	r=insert(r,400);
	r=insert(r,500);

	display(r);
	
	struct node* p=r;

	while(1)
	{	
		p=swap(p);
		display(p);
	}
}

struct node* insert(struct node* p,int data)
{
	struct node* temp=p;
	
	if(p == NULL)
	{
		p=(struct node*)malloc(sizeof(struct node));
	
		p->data=data;
		p->link=NULL;
		
		return p;
	}
	
	while(p->link != NULL)
		p=p->link;

	p->link=(struct node*)malloc(sizeof(struct node));

	p -> link -> data = data;
	p -> link -> link = NULL;
	
	return temp;
}

void display(struct node* p)
{
	while(p != NULL)
	{
		printf("ct=%p   data=%d   nt=%p\n",p,p->data,p->link);
		p=p->link;
	}
}

struct node* swap(struct node* p)
{
	struct node* temp=p;
	int n;

	printf("\nenter the node for swaping \n");
	scanf("%d",&n);
	int n1=n;

	if(n>=5)
	exit(1);
	
	if(n == 1)
	{
		p=p->link;
		
		struct node* temp1=temp->link;
		
		temp->link=temp1->link;
		temp1->link=temp;
		
		printf("after the %d node swaping\n",n1);
		return p;
	}
		
	while(1 < n-1)
	{
		temp=temp->link;
		n--;
	}

	struct node* temp1=temp->link;
	struct node* temp2=temp1->link;
	
	
	temp1->link=temp2->link;
	temp2->link=temp1;
	temp->link=temp2;
	
	printf("after the %d node swaping\n",n1);
	return p;
}

#include<stdio.h>
#include<stdlib.h>

struct ex
{
	int data;
	struct ex* link;
};
	
void push();
int pop();
void display();

struct ex* root=NULL;
int vol=0;

void main()
{
	push();
	push();
	push();
	push();
	push();
	
	display();
	
	vol=pop();
	printf("pop value is %d\n",vol);
	pop();
	printf("pop value is %d\n",vol);
	
	printf("\n");
	display();
}

void push()
{
	struct ex* temp;
	temp=(struct ex*)malloc(sizeof(struct ex));
	
	printf("enter the value  ");
	scanf("%d",&temp->data);
	temp->link=root;
	
	root=temp;
}
int pop()
{
	struct ex* p=root;
	vol=p->data;
	root=p->link;
	free(p);
	
	return vol;
}
	
void display()
{
	struct ex* p=root;
	
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->link;
	}
}


#include<stdio.h>
#define N 10
int q[N];
int f=-1;
int r=-1;
FILE *fp;
void enqueue(int val)
{
	if(r>=N-1)
		printf("Queue overflow\n");

	else if(r==-1 && f== -1) 
	{
		f=r=0;
		q[r]=val;
		printf("value inserted  : %d \n",val);
	}
	else
	{
		r++;
		q[r]=val;
		printf("value inserted  : %d \n",val);
	}
}
int dequeue()
{
	int tmp=0;
	if(f==-1)
		printf("queue underflow\n");
	tmp=q[f];
	if(f==r)
		f=r=-1;
	else
		f++;
	return tmp;
	
}
void display()
{
	int i;
	if(f==-1)
		printf("Queue underflow\n");
	else
	{
		for(i=f;i<=r;i++)
		{
			printf("%d \t",q[i]);
		}
	}
}
int main()
{
	int ch,con=1,val;
	fp=fopen("pro11.txt","r");
	if(fp==NULL)
	{
		printf("File not found !");
		exit(0);
	}	
	while(1)
	{
		printf("\n---------menu---------");
		printf("\n1.Insert \n2.delete\n3.display\n4.Exit\n");
		printf("Enter choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
				if((fscanf(fp,"%d",&val))==EOF)
				{
					printf("No data availble in file for push");
					break;
				}
				enqueue(val);
				break;
			case 2:
				val=dequeue();
				printf("\nDeleted value = %d",val);
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break ;
			default :
				printf("Invalid choice try again ");
				break;
		}
	}	
}


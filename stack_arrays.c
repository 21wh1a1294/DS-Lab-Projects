#include<stdio.h>
#include<stdlib.h>
#define Size 5 
 
int Top=-1, stack[Size];
void Push();
void Pop();
void display();
 
int main()
{
	int ch;
	
	while(ch!=0)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.display\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default:printf("\nInvalid choice!!");
		}
	}
}
 
void Push()
{
	int x;
	
	if(Top==Size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		Top=Top+1;
		stack[Top]=x;
	}
}
 
void Pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",stack[Top]);
		Top=Top-1;
	}
}
 
void display()
{
	
	
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=Top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}




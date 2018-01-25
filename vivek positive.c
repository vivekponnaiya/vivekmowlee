#include<stdio.h>
void main()
{
	int p;
	printf("ENter number:");
	scanf("%d",&p);
	if(p>0)
	{
		printf("positive no");
	}
	else if(p<0)
	{
		printf("negative number");
	}
	else
	{
		printf("Zero");
	}
}

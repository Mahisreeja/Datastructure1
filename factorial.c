#include<stdio.h>
int main()
{
	int i,fact=1,num;
	printf("enter a number \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	fact=fact*i;
	{
		printf("the factorial of %d is %d\n",num,fact);
	}
}
 

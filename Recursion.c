#include<stdio.h>
int abc(int n);
void main()
{
	int n,total;
	printf("To Check the Sum of Digits,\n");
	printf("Enter a number :");
	scanf("%d",&n);
	total=abc(n);
	printf("Sum Of Digits of %d is %d ",n,total);
}
int abc(int n)
{
	if (n==0)
	{
		return 0;
	}
	else
	{
		return n%10+abc(n/10);
	}
}

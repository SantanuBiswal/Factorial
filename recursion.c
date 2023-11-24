#include<stdio.h>
int fact(int n);//defination
void main()
{
	int num;
	printf("Enter any no.>>>");
	scanf("%d",&num);
	printf("factorial of %d is =%d",num,fact(num));//calling 
}
int fact(int x)
{
	if(x==0)
	return 1;
	else
	return(x*fact(x-1));
}
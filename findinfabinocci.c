#include<stdio.h>
int present(int num)
{
	int a=0,b=1,c;
	if(num==0 || num==1)
	{
		return 1;
	}
	while(c<num)
	{
		c=a+b;
		a=b;
		b=c;
		if(c==num)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int num,n;
	scanf("%d",&num);
	n=present(num);
	if(n)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}

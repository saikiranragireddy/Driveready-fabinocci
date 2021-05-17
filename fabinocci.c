#include<stdio.h>
int position(int num)
{
	int a=0,b=1,i=2,c;
	if(num==1)
	{
		return a;
	}
	if(num==2)
	{
		return b;
	}
	while(1)
	{
		c=a+b;
		a=b;
		b=c;
		i=i+1;
		if(i==num)
		{
			return c;
		}
	}
}
int main()
{
	int num,n;
	scanf("%d",&num);
	n=position(num);
	printf("%d",n);
	return 0;
}

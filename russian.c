//russian multiplication logic
#include<stdio.h>
int main()
{
	int m,n,sum=0;
	printf("enter two numbers");
	scanf("%d%d",&m,&n);
	while(m>0)
	{
		if(m%2!=0)
		{sum+=n;}
		m=m/2;
		n=n*2;
		}
		printf("the product of no is %d",sum);
		return 0;
	}
	     

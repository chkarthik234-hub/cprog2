//armstrong
#include<stdio.h>  
int main()    
{    
int n,r,arm=0,count=0;
printf("enter a number");
scanf("%d",&n);
int temp=n;
int p=n;
while(p>0)
{
count=count+1;
p=p/10;
}
temp=n;
while(n>0)
{
arm=arm+pow(n%10,count);
n=n/10;
}
if(temp==arm)
printf("armstrong");
else
printf("not armstrong");
return 0;
}

#include<stdio.h>

int fact(int num)
{
	int sum=0;
	while(num)
	{
	int r=num%10;
	int f=1;
	while(r)
	{
		f*=r;
		r--;
	}
	sum+=f;
	num/=10;
}
	return sum;
}

int main()
{
	int num,i,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("1 to %d strong numbers: ",num);
	for(i=1;i<=num;i++)
	{
	int factorial=fact(i);
	if(factorial==i)
	printf("%d ",i);
	}

return 0;
}

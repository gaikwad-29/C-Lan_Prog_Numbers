#include<stdio.h>

int fact(int num)
{
	int i,sum=0;
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		sum+=i;
	}
	return sum;
}

int main()
{
	int num,i,sum;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("1 to %d perfect numbers: \n",num);
	for(i=1;i<=num;i++)
	{
		int perfect=fact(i);
	 if(perfect==i)
	printf("%d ",i);
	}
	return 0;
}

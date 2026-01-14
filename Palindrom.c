#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter a number");
	scanf("%d",&num);
	
	printf("1 to %d palindrom numbers: \n",num);
	for(i=0;i<=num;i++)
	{
	int temp=i;
	int rev=0;
	while(temp!=0)
	{
		rev=(rev*10)+temp%10;
		temp/=10;
	}
	if(rev==i)
		printf("%d ",i);
}
}

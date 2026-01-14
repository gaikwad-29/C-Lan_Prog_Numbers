#include<stdio.h>
int digcount(int num){
	int count=0;
	while(num){
		count++;
       num/=10;
	}
	return count;
}

int power(int base,int pow){
	int result=1,i;
	for(i=1;i<=pow;i++)	{
		result*=base;
	}
	return result;
}

int main(){	
    int num,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("1 to %d Armstrong numbers: \n",num);
	for(i=1;i<=num;i++)	{
    	int temp=i;
		int sum=0;
	   int count=digcount(i);

	while(temp)	{
		int r=temp%10;
		sum+=power(r,count);
		temp/=10;
	}
	
	if(sum==i)
	printf("%d ",i); 
 } }




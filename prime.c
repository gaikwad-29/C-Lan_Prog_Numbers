#include<stdio.h>

int isprime(int num){
    	int i ;
	
	 	if(num<=1)
       return 0;
       
        for(i=2;i<=num/2;i++)
        {
        	if(num%i==0)
               return 0;
		}
		
	return 1;
}

int main(){
   int num,i;
   printf("Enter a number: ");
   scanf("%d",&num);

printf("1 to %d prime numbers: \n\n",num);
   for(i=1;i<=num;i++)
   {
    if(isprime(i))
    printf("%d ",i);
   }
   
   	return 0;
}

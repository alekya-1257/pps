#include<stdio.h>
void main ()
{
	int n,sum,rem;
	printf("\n give n");
	scanf("%d", &n);
	sum=0;
	while(n>0)
	{
		rem=n%10;
	sum=sum+rem;
	n=n/10;
	}
	printf("%d",sum);

}	


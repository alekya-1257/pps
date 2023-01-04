#include<stdio.h>
void main()
{
       	 int n,rem;
	printf("\n give n ");
	scanf("%d",&n);
	while(n>0)
	{ rem=n%10;
	printf("%d",rem);
	n/=10;
	}
}	


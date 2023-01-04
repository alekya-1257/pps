#include<stdio.h>
void main()
{	int x;
	printf("enter value");
	scanf("%d",&x);
	if (x==0)
	printf("neither positive nor");
	else if (x<0)
	printf("negative");
	else
	printf("positive");
}	
		

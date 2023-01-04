#include <stdio.h>
void mat_mul(int[][2],int [][2]);
int main()
{
	int a[][2]={1,2,3,4};
	int b[][2]={1,2,3,4};

	mat_mul(a,b);
	return 0;
}


void mat_mul(int a[][2],int b[][2])
{
	int c[2][2]={0},i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}


	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}

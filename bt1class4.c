#include <stdio.h>

int main()
{
	int a[2][3];
	int b[2][3];
	
	int i, j = 0;
	
	printf("Enter a: \n");
	for(i = 0; i < 2; i++) 
	{
		for(j = 0; j < 3; j++)
		{
			printf("Enter number: ");
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter b: \n");
	for(i = 0; i < 2; i++) 
	{
		for(j = 0; j < 3; j++)
		{
			printf("Enter number: ");
			scanf("%d", &b[i][j]);
		}
	}
	
	printf("------------matrix 1-------------\n");
	for(i = 0; i < 2; i++) 
	{
		for(j = 0; j < 3; j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("------------matrix 2-------------\n");
	for(i = 0; i < 2; i++) 
	{
		for(j = 0; j < 3; j++)
		{
			printf(" %d ", b[i][j]);
		}
		printf("\n");
	}
	
	printf("-----matrix 1 + matrix 2-----\n");
	for(i = 0; i < 2; i++) 
	{
		for(j = 0; j < 3; j++)
		{
			printf(" %d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a;
	
	printf("Nhap vao gia tri cua a: ");
	
	scanf("%d", &a);
	
	printf("\n");
	
	if(a % 2 == 0)
	{
		printf("A = %d Lla so chan\n\n", a);
	}
	else
	{
		printf("A = %d la so le\n\n", a);
	}

	system("pause");

	return 0;
}
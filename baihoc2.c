#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c;
	float x1, x2;
	float delta;
	
	printf("Enter a: ");
	scanf("%f", &a);
	
	printf("Enter b: ");
	scanf("%f", &b);
	
	printf("Enter c: ");
	scanf("%f", &c);
	
	if(a == 0)
	{
		x1 = -c / b;
		printf("Phuong trinh co 1 nghiem: %.2f", x1);
	}
	else
	{
		delta = b * b - 4 * a * c;
		
		if(delta > 0)
		{
			x1 = (-b + sqrt(delta )) / (2*a);
			x2 = (-b + sqrt(delta )) / (2*a);

			printf("Phuong trinh co 2 nghiem: x1 = %.2f x2 = %.2f ", x1, x2);
		}
		
		else if(delta == 0)
		{
			float x = -b / (2*a);
			printf("Phuong trinh co nghiem kep: %.2f", x);
		}
		
		else
		{
			printf("Phuong trinh vo nghiem!");
		}
		
	}
	
	return 0;
}
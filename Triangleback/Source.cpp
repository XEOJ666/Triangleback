#include<stdio.h>
void C_test(int);
int main()
{
	int b;
	scanf_s("%d", &b);
	for (int a = 0;a <= b;a++)
	{
		printf("*");
	}
	for (int a = 0;a <= b-2;a++)
	{
		printf("*");
	}

	if (b <= 0)
	{
		printf("Error");
	}
	else
	{
		printf("\n");
		C_test(b);
	}
	return 0;
}
void C_test(int b)
{
	for (int row = b;row >= 1;row--)
	{
		for (int space = 1; space <= b - row; space++)
		{
			printf(" ");
		}
		for (int star = 1; star <= 2 * row - 1; star++)
		{
			if (star == 1 || star == 2 * row - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
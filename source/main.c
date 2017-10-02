#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;

	printf("enter two integers,and i will tell you\n");
	printf("the relationships they satisfy: ");
	
	scanf_s ("%d %d", &num1, &num2);

	if (num1 == num2)
		{
		printf("%d is eqaul %d\n", num1, num2);
		}
	if (num1 != num2)
	{
		printf("%d is not eqaul %d\n", num1, num2);
	}
	if (num1 < num2)
	{
		printf("%d is less than %d\n", num1, num2);
	}
	if (num1 > num2)
	{
		printf("%d is big than %d\n", num1, num2);
	}
	if (num1 <= num2)
	{
		printf("%d is less than or eqaul %d\n", num1, num2);
	}
	if (num1 >= num2)
	{
		printf("%d is big than or eqaul %d\n", num1, num2);
	}
	system("pause");
	return 0;
}
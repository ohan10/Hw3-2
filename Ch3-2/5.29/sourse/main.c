#include <stdio.h>
#include <stdlib.h>

int lcm(int, int);

int main(void)
{
	int number1;
	int number2;
	int lcm_number;

	printf("Enter first number: ");
	scanf("%d", &number1);

	printf("Enter second number: ");
	scanf("%d", &number2);

	lcm_number = lcm(number1, number2);

	printf("Least common multiple number is %d\n", lcm_number);

	system("pause");
	return 0;
}

int lcm(int a, int b)
{
	int max;
	int min;
	int i = 1;

	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}

	while ((max * i) % min != 0) {
		i++;
	}

	return max * i;
}
#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

int move_count = 0;

int main(void)
{
	int input_disks;
	char input_source;
	char input_auxiliary;
	char input_target;

	printf("Enter disks amount: ");
	scanf("%d", &input_disks);

	printf("Enter source peg (ex. A): ");
	scanf(" %c", &input_source);

	printf("Enter auxiliary peg (ex. B): ");
	scanf(" %c", &input_auxiliary);

	printf("Enter target peg (ex. C): "); 
	scanf(" %c", &input_target);

	printf("\n");

	hanoi(input_disks, input_source, input_auxiliary, input_target);

	printf("Moved count is %d\n", move_count);

	system("pause");
	return 0;
}

void hanoi(int disks, char source, char auxiliary, char target)
{
	if (disks == 1)
	{
		printf("Move disk%d from %c to %c\n", disks, source, target);
		move_count++;
	}
	else
	{
		hanoi(disks - 1, source, target, auxiliary);
		printf("Move disk%d from %c to %c\n", disks, source, target);
		hanoi(disks - 1, auxiliary, source, target);
		move_count++;
	}
}
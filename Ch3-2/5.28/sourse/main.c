#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char input_char;
	char convert_char;

	while (1) {
		printf("Enter an alphabet (# to end): ");
		scanf(" %c", &input_char);

		if (input_char == '#') {
			break;
		}

		if ((input_char >= 'A') && (input_char <= 'Z'))	{
			convert_char = input_char + 0x20;
			printf("Convert an alphabet: %c\n", convert_char);
		}
		else if ((input_char >= 'a') && (input_char <= 'z')) {
			convert_char = input_char - 0x20;
			printf("Convert an alphabet: %c\n", convert_char);
		}
		else {
			printf("Error: Please try again.\n");
		}

		printf("\n");
	}

	system("pause");
	return 0;
}
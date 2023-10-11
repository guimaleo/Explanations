#include <stdio.h>

void	show_binary(int n, int bit)
{
	int	i;

	i = bit - 1;
	while (i >= 0)
	{
		printf("%i", (n >> i) & 1);
		if (i % 8 == 0 && i > 0)
			printf(" | ");
		i--;
	}
}

int	main()
{
	char	str[] = "Batata";
	int	arr[] = {1, 2, 3, 4, 5, 6};

	printf("For the str\n->%s\n\n", str);
	printf("Hex address: %p		Decimal Address: %lu\n\n", str, (unsigned long)str);
	int	i = 0;
	while (str[i]) {
		printf("str[%i]: %c --> %lu Binary: ", i, str[i], (unsigned long)&str[i]);
		show_binary(str[i], (sizeof(char) * 8));
		printf("\n");
		i++;
	}
	printf("Variable size: %lu bytes\nString size: %lu\n", sizeof(char), sizeof(str));
	i = 0;
	printf("\n\nFor the array\n-> {1, 2, 3, 4, 5, 6}\n\n");
	printf("Hex address: %p		Decimal Address: %lu\n\n", arr, (unsigned long)arr);
	while (i < sizeof(arr) / sizeof(int))
	{
		printf("Arr[%i]: %i --> %lu Binary: ", i, arr[i], (unsigned long)&arr[i]);
		show_binary(arr[i], (sizeof(int) * 8));
		printf("\n");
		i++;
	}
	printf("Variable size: %lu bytes\nArray size: %lu\n", sizeof(int), sizeof(arr));
}

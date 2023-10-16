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
	printf("\n");
}

void	flip_bits(int *n)
{
	*n = ~(*n);
	(*n)++;
}

void	prove_twos_complement_behavior(int n)
{
	printf("Decimal: %i\nBinary: ", n);
	show_binary(n, 8);
	flip_bits(&n);
	printf("Negation of the number: %i\n", n);
	printf("%8c", 32);
	show_binary(n, 8);
}

int	main(void)
{
	char	signed_values[] = {-0 , 0, 37, -37, 127, -127, -1, 1, -128, 128};
	unsigned char	values[] = {0, 37, 255};
	int	test_signed = sizeof(signed_values) / sizeof(signed_values[0]);
	int	test_unsigned = sizeof(values) / sizeof(values[0]);
	int	i = 0;

	printf("For Signed Chars:\n\n");
	while (i < test_signed)
	{
		prove_twos_complement_behavior(signed_values[i]);
		i++;
	}
	i = 0;
	printf("\n\nFor Unsigned Chars:\n\n");
	while (i < test_unsigned)
	{
		prove_twos_complement_behavior(values[i]);
		i++;
	}
}

#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins to\
 *make change for an amount of money.
 *@argc: arguments count
 *@argv: arguments vector
 *
 *Return: 0 if success.
 */

int main(int argc, char *argv[])
{
	int num = 0, i = 0, money;
	int coins[] = {25, 10, 5, 2, 1};

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	while (money > 0 && i < 5)
	{

		while (money - coins[i] >= 0)
		{
			money -= coins[i];
			num++;
		}
		i++;
	}

	printf("%d\n", num);
	return (0);
}

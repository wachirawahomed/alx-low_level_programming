#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins to make change for amount of money
 * @argc: number of arguments.
 * @argv: pointer to array of arguments.
 * Return: number of coins, 1 if arguments passed == 1, 0 argument is negative
 */

int main(int argc, char *argv[])
{
	int money, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	coins = 0;

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (money >= 25)
			money -= 25, coins++;
		while (money >= 10)
			money -= 10, coins++;
		while (money >= 5)
			money -= 5, coins++;
		while (money >= 2)
			money -= 2, coins++;
		while (money >= 1)
			money -= 1, coins++;
	}
	printf("%d\n", coins);
	return (0);
}




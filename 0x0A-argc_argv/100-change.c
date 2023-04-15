 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * @argc: an integer
 * @argv: a pointer to a character
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int money;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	coins = 0;
	while (money > 0)
	{
		if (money >= 25)
			money = money - 25;
		else if (money >= 10)
			money = money - 10;
		else if (money >= 5)
			money = money - 5;
		else if (money >= 2)
			money = money - 2;
		else if (money >= 1)
			money = money - 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}

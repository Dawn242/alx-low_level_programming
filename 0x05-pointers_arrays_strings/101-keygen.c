#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: 0 Always.
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, diff_haf1, diff_haf2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		diff_haf1 = (sum - 2772) / 2;
		diff_haf2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_haf1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_haf1))
			{
				password[index] -= diff_haf1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_haf2))
			{
				password[index] -= diff_haf2;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);
}

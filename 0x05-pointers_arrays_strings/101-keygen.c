#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function to generates random valid passwords
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pswrd[100];
	int i, j, sum = 0;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pswrd[i] = rand() % 78;
		sum += (pswrd[i] + '0');
		putchar(pswrd[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}

	return (0);
}

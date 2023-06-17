#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Succes)
*/
int main(void)
{
	int ras;
	int vac;
	int ten;
	int bas;

for (ras = 0 ; ras < 10 ; ras++)
{	

	for (vac = 0 ; vac <= 10 ; vac++)
	{
	
		for (ten = 0 ; ten < 10 ; ten++)
		{
			for (bas = 0 ; bas < 10 ; bas++)
			{
				putchar('0' + ras);
				putchar('0' + vac);
				putchar(32);
				putchar('0' + ten);
				putchar('0' + bas);
				if (!(tho == 9 && hun == 8))
				{
					putchar(',');
					putchar(32);
				}
				bas++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <time.h>

/**
 *main - print if a number random is negative or positive
 *or equal zero
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%is negative", n);
	}
	return (0);
}

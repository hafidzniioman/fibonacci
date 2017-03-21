#include <stdio.h>

int fibonacci(int term);
int main(int argc, char const *argv[])
{
	int terms = 6, counter;
	int sum = 0;

	printf("fibonacci series till %d terms\n", terms);
	for(counter=0; counter < terms; counter++)
	{
		printf("%d", fibonacci(counter));
		sum += fibonacci(counter);
	}
	printf("sum %d", sum);
	return 0;
}

int fibonacci(int term)
{
	if (term < 2)
	{
		return term;
	}
	return fibonacci(term-1) + fibonacci(term-2);
}


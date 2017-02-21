#include<stdio.h>

int fibonacci(int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
int main()
{
	int n;
	printf("Please input position in fibonacci sequence\n");
	scanf("%d", &n);
	printf("%d", fibonacci(n));
	return 0;
}

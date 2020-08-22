#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a, b, c = 2, sum = 1, e, d;
int main()
{
	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	if (b > a)
	{
		e = a;
		d = b;
		a = d;
		b = e;
	}
	while ((a > 1) && (c < a) && (b > 1) && (b < a))
	{
		if ((a % c == 0) && (b % c == 0))
		{
			sum = sum * c;
			a = a / c;
			b = b / c;
		}
		else
		{
			c++;
		}
	}
	printf("Greatest common divisor = %d", sum);
}
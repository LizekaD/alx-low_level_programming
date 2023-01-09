#include "main.h"
/**helperFunction - check if square of numbers exists
 * @num:number
 * @pSqrt: possible square of number
 *
 * Return: sqrt of numbers of -1
 */
int helperFuction(int num , int pSqrt)
{
	if ((pSqrt * pSqrt == num)
	{
		return (pSqrt);
	}
	else
	{
	if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFuction(num, psqrt + 1));
	}
}
/**
 * _sqrt_recursion -  returns the value natural square value.
 * @n: number to find square of
 *
 * Return: squareroot of n
 * -1 if n does not have natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}

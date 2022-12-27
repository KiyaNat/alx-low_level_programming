#include "main.h"
/**
 * largest_number - return the largest of number for three num
 * @a: first integer
 * @b: second integer
 * @c: thrid integer
 * Return: largest num
 */
int largest_number(int a, int b, int c)

{
	    int largest;
	    
	    if (a > b && b > c)
	    {
		    largest = a;
	    }
	    else if (b > a && a > c)
	    {
		    largest = b;
	    }
	    else
	    {
		    largest = c;
	    }
	    return (largest);
}

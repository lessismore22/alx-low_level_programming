#include "main.h"

/**
 * _isdigit - this function checks for a digit 
 * (0 through 9)
 *
 * Returns: 1 if a digit. return 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	


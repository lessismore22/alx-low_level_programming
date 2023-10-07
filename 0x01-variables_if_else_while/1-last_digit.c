#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*
 *
 *main - prints the last digit of a random number and states
 *if it's within the range of 0 and 6
 *
 *Return always 0
 *
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
printf("Last digit of %d is %d and is greater than 5\n");
}
if ((n % 10 < 6) && (n % 10 != 0))
{
printf("Last digit of %d is %d and is greater than 5\n");
}
else
printf("last digit of %d is 0 and %d is 0\n");
}
return (0);

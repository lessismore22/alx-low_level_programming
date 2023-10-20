/**
 * leet - encode string to 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	char *p = s;
	char a[] = { 97, 101, 111, 116, 108 };
	char n[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
				*s = n[i] + '0';
		}
		s++;
	}
	return (p);
}
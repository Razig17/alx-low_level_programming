
/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 *
 * @str: A pointer to a string
 *
 * Return: The hash value for the string
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

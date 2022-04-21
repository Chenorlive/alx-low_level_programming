/**
 * _strcpy - func that copy str1 to str2 pointer
 * @dest: input of string
 * @src: input of string
 * Return: pointer dest
*/

char *_strcpy(char *dest, char *src)
{
	char *t = dest;

	while (*src)
		*dest++ = *src++;
	return (t);
}

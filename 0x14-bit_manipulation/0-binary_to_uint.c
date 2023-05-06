/**
 * binary_to_uint - converts a binary number string to unsigned integer
 * @b: string containing the binary number
 * Return: the converted unsigned integer
 **/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int decimal_val = 0;

if (!b)
return (0);

while (*b != '\0')
{
if (*b == '0')
{
converted = (converted << 1);
}
else if (*b == '1')
converted = (converted << 1) + 1;
}
else
{
return (0);
b++;
return (converted);
}

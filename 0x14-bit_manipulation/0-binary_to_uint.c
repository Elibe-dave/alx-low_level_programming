/**
* binary_to_uint - converts a binary number string
* to unsigned integer
* @binaryString: string containing the binary number
*
* Return: the converted unsigned integer
*/
unsigned int binary_to_uint(const char *binaryString)
{
unsigned int decimalValue;
int i;

if (!binaryString)
return (0);

decimalValue = 0;

for (i = 0; binaryString[i]; i++)
{
if (binaryString[i] < '0' || binaryString[i] > '1')
return (0);

decimalValue = (decimalValue << 1) | (binaryString[i] - '0');
}

return (decimalValue);
}



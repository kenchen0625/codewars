#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *maskify(char *masked, const char *string) {
	int string_length = strlen(string);

	for (int i = 0; i < string_length; i++)
	{
		*(masked+i) = i < string_length - 4 ? '#' : *(string+i);
	}

	*(masked+string_length) = '\0';

	return masked; // return it
}

int main()
{
	char *input = "64607935616";
	char *masked = memset(malloc(12), '@', 12);
	char *result = maskify(masked, input);
	printf("%s\n", result);
	return 0;
}

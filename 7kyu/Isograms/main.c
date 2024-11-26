#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool IsIsogram (const char *string) 
{
	bool alpha_occurance[26] = {false};
	int index = 0;
	while(string[index] != '\0'){
		char lowered = tolower(string[index]);
		if(alpha_occurance[lowered - 97]) {
			return false;
		}
		alpha_occurance[lowered - 97] = true;
		index++;
	}
	return true;
}

int main() {
	const char *string = "Dermatoglyphics";
	if(IsIsogram(string)) {
		printf("Yes");
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseWords(const char* text) {
	int text_length = strlen(text);
	char *reversed = malloc(text_length + 1);
	int word_start_index = 0;
	int pos = 0;
	for(int i = 0; i <= text_length; i++) {
		pos = i;
		if(text[i] == ' ' || text[i] == '\0') {
			if(pos != 0 && text[i-1] != ' ') {
				int terminate = word_start_index;
				while(pos > terminate) {
					pos--;
					reversed[word_start_index] = text[pos];
					word_start_index++;
				}
			} 
			word_start_index++;
			reversed[i] = ' ';	
		} else if (text[i] == ' ' && (pos == 0 || text[i-1] == ' ')){
			reversed[i] = ' ';
			word_start_index++;
		}
	}
	reversed[text_length] = '\0';
	return reversed;
}
int main(){
	const char* test_str = "a b c d";
	printf("%s|\n", reverseWords(test_str));
	return 0;
}

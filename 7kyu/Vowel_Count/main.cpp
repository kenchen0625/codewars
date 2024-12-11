#include <iostream>
#include <string>

using namespace std;

int getCount(const string& inputStr){
	int num_vowels = 0;
	for(char c: inputStr) {
		switch(c) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				num_vowels++;
				break;
			default:
				break;
		}
	}
	return num_vowels;

}

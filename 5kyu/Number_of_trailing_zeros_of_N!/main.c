#include <stdio.h>

long zeros(long n) {
	long zero_count = 0;
	for(int i = 5; n / i >= 1; i *= 5) {
		zero_count += n / i;
	}
 	return zero_count;
}

int main(){
	long n = 12;
	long result = zeros(n);
	printf("%ld", result);
	return 0;
}

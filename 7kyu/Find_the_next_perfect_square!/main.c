#include <stdio.h>
#include <math.h>
long int findNextSquare(long int sq)
{
	double squared = sqrt((double)sq);
	int truncated = (int)squared;
	if(squared != truncated) {
		return -1;
	}
	return (long int) pow(truncated + 1, 2);
}

int main() {
	long int sq = 114;
	long int result = findNextSquare(sq);
	printf("%ld", result);
	return 0;
}

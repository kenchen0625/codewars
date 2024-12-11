#include <iostream>

int get_sum(int a, int b) {
	if(a == b) {
		return a;
	}

	int low, high;
	int sum = 0;

	if(a > b) {
		low = b;
		high = a;
	} else {
		low = a;
		high = b;
	}

	for(int i = low; i <= high; i++) {
		sum += i;
	}

	return sum;
}

int main(){
	int result = get_sum(2, 2);
	std::cout << result << "\n";
	return 0;
}

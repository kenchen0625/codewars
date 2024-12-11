#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>

using namespace std;

string seriesSum(int n){
	float sum = 0.00;
	for(int i = 1; i <= n; i++) {
		float adder = 1.00 / (1 + 3 * (i-1));
		sum += adder;
	}

	ostringstream s;
	s << fixed << setprecision(2) << sum;
	return s.str();
}

int main() {
	int n = 1;
	string result = seriesSum(n);
	cout << result << "\n";
}

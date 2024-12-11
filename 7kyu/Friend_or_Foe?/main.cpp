#include <iostream>
#include <vector>

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input) {
	std::vector<std::string> filtered;
	for(const auto &name: input) {
		if(name.size() == 4) {
			filtered.push_back(name);
		}
	}

	return filtered;
}

int main(){
	std::vector<std::string> input = {"Ryan", "Kieran", "Jason", "Yous"};
	std::vector<std::string> result = friendOrFoe(input);

	for(std::string name: result) {
		std::cout << name << " ";
	}
	
	return 0;
}

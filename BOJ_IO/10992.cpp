// star 17

#include <iostream>
int main(int argc, char* argv[]) {

	int n;
	std::cin >> n;
	
	for (size_t i = 1; i < n; i++) {
		for (size_t k = i; k < n; k++) {
			std::cout << " ";
		}
		std::cout << "*";
		for (size_t j = 1; j < 2*(i-1); j++) {
			std::cout << " ";
		}
		if (i>1) {
			std::cout << "*";

		}
		std::cout << std::endl;
	}
	for (size_t i = 0; i < 2*n-1; i++) {
		std::cout << "*";
	}

	return 0;
}
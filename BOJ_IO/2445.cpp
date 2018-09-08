// star  8

#include <iostream>
int main(int argc, char* argv[]) {

	int n;
	std::cin >> n;
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < i + 1; j++) {
			std::cout << "*";
		}
		for (size_t k = 0; k < 2*(n-i-1); k++) {
			std::cout << " ";
		}
		for (size_t j = 0; j < i + 1; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	for (size_t i = 0; i < n; i++) {
		for (size_t j = n; j > i+1; j--) {
			std::cout << "*";
		}
		for (size_t k = 2*(i+1); k > 0; k--) {
			std::cout << " ";
		}
		for (size_t j = n; j > i + 1; j--) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}
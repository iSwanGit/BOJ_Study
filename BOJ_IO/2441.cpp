// star 4

#include <iostream>
int main(int argc, char* argv[]) {

	int n;
	std::cin >> n;
	for (size_t i = 0; i < n; i++) {
		for (size_t k = 0; k < i; k++) {
			std::cout << " ";
		}
		for (size_t j = 0; j < n-i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
	return 0;
}
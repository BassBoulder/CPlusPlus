#include <iostream>

int main() {
	int favourite_number;
	std::cout << "Enter your favourite number between 1 and 100: ";

	std::cin >> favourite_number;

	std::cout << "Amazing " << favourite_number << " is my favourite too" << std::endl;

	return 0;
}
#include <iostream>


int main(void) {
	int number;

	std::cout << "Type the factorial number : ";
	std::cin >> number;

	std::cout << number << "! = ";

	int i = 1;
	for (i = 1; number > 1; number--) {
		i = i * number;
		std::cout << i << " ";
	}

	std::cout << "\nThe result is : " << number * i;

	return 0;
}
#include <iostream>

int main() {
	int sum, prod;
	
	for (int i = 1; i < 500; i++) {
		for (int j = i + 1; j < 500; j++) {
			int k = 1000 - i - j;
			if (i * i + j * j == k * k) {
				sum = i + j + k;
				prod = i * j * k;
				std::cout << "The Pythagorean Triplet is " << i << "^2 + " 
				<< j << "^2 = " << k << "^2.\n";
			}
		}
	}

	std::cout << "The sum of a+b+c is: " << sum << std::endl;
	std::cout << "The product of a*b*c is: " << prod << std::endl;
}

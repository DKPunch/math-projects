#include <iostream>

int main() {
    int result = 0, num, pal, prod;
    
	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) { 
		    pal = 0;
           	num = i * j;
           	prod = num;
           	while (prod != 0) {
               	pal = pal * 10 + prod % 10;
               	prod /= 10;
           	}
           	if (pal == num) {
               	if (num > result) {
               		result = num;
               	}
            }
		}
	}
	std::cout << "The largest palindrome made from the "
		<< "product of two 3-digit numbers is: " << result << ".\n";
}

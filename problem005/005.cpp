#include <iostream>

using namespace std;

int main() {
	int value[21];
	int prod = 1;
		
	for (int i = 1; i < 21; i++) {
		value[i] = i;
	}

	for (int i = 3; i < 21; i++) {
		for (int j = 2; j < i; j++) {
			if (value[i] % value[j] == 0) {
				value[i] /= value[j];
			}
		}
	}

	for (int i = 1; i < 21; i++) {
		prod *= value[i];
	}
	
	cout << prod << endl;
}

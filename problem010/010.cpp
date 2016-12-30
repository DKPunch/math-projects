#include <iostream>

int main() {
    int num = 2;
    int limit = 2000000;
    long long sum = 0;
    
    while (num < limit) {
        bool prime = true;
        
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime == true) {
            sum += num;
        }
        num++;
    }
    
    std::cout << "The sum of all prime numbers below 2 million is: " << sum << ".";
    return 0;
}

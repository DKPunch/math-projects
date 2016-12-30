 #include <iostream>

int main() {
    int count = 0; 
    int num = 2;
    int limit = 10001;
    
    while (count < limit) {
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
            count++;
        }
        if (count != limit){
            num++;
        }
    }
    
    std::cout << "the prime number is " << num << ".";
    return 0;
}

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime or not
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Finding two prime numbers that add up to the given number
    for (i = 2; i <= num / 2; i++) {
        if (isPrime(i)) {
            if (isPrime(num - i)) {
                printf("%d + %d = %d\n", i, num - i, num);
                flag = 1;
            }
        }
    }
    
    if (flag == 0) {
        printf("The given number cannot be expressed as the sum of two prime numbers.\n");
    }
    
    return 0;
}


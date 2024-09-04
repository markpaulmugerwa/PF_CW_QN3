#include <iostream>

// Function to compute the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce a fraction
int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0; // failure to reduce
    }

    int divisor = gcd(num, denom);
    num /= divisor;
    denom /= divisor;

    return 1; // successful reduction
}

int main() {
    int numerator = 8;
    int denominator = 12;

    if (reduce(numerator, denominator)) {
        std::cout << "Reduced fraction: " << numerator << "/" << denominator << std::endl;
    } else {
        std::cout << "Failed to reduce fraction." << std::endl;
    }

    return 0;
}

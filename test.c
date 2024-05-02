#include <stdio.h>

// ¿ìËÙÃÝËã·¨
long long fastExponentiation(long long base, long long exponent, long long mod) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

int main() {
    long long base, exponent, mod;
    printf("Enter the base: ");
    scanf_s("%lld", &base);
    printf("Enter the exponent: ");
    scanf_s("%lld", &exponent);
    printf("Enter the modulo: ");
    scanf_s("%lld", &mod);

    long long result = fastExponentiation(base, exponent, mod);
    printf("%lld raised to the power %lld modulo %lld is: %lld\n", base, exponent, mod, result);

    return 0;
}

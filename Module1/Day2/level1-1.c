#include <stdio.h>
#include <stdint.h>

void printExponent(double x) {

    uint64_t* ptr = (uint64_t*)&x;

    uint16_t exponent = (uint16_t)((*ptr >> 52) & 0x7FF);

    printf("Hexadecimal exponent: 0x%03x\n", exponent);

    printf("Binary exponent: 0b");
    for (int i = 10; i >= 0; --i) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x;
    scanf("%lf",&x);
    printExponent(x);

    return 0;
}

#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
}Complex;

Complex read() {
    Complex c;

    printf("Enter the real part: ");
    scanf("%lf", &c.real);

    printf("Enter the imaginary part: ");
    scanf("%lf", &c.imaginary);

    return c;
}

void write(Complex c) {
    printf("Complex number: %.2lf + %.2lfi\n", c.real, c.imaginary);
}

Complex add(Complex c1, Complex c2) {
    Complex sum;

    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;

    return sum;
}

Complex mul(Complex c1, Complex c2) {
    Complex product;

    product.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    product.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);

    return product;
}

int main() {
    Complex c1, c2, sum, product;

    printf("First complex number:\n");
    c1 = read();

    printf("Second complex number:\n");
    c2 = read();

    printf("\n");

    printf("First complex number:\n");
    write(c1);

    printf("Second complex number:\n");
    write(c2);

    printf("\n");

    sum = add(c1, c2);
    printf("Sum:\n");
    write(sum);

    product = mul(c1, c2);
    printf("Product:\n");
    write(product);

    return 0;
}

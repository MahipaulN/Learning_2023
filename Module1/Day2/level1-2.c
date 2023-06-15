#include <stdio.h>

// Function to swap two elements of any type
void swap(void* a, void* b, size_t size) {
    unsigned char* x1 = (unsigned char*)a;
    unsigned char* x2 = (unsigned char*)b;

    for (size_t i = 0; i < size; ++i) {
        unsigned char temp = x1[i];
        x1[i] = x2[i];
        x2[i] = temp;
    }
}

int main() {
    int i1, i2;
    double d1, d2;
    char a1, a2;

    scanf("%d %d", &i1, &i2);
    swap(&i1, &i2, sizeof(int));
    printf("num1 = %d, num2 = %d\n", i1, i2);

    scanf("%lf %lf", &d1, &d2);
    swap(&d1, &d2, sizeof(double));
    printf("d1 = %f, d2 = %f\n", d1, d2);

    scanf(" %c %c", &a1, &a2);
    swap(&a1, &a2, sizeof(char));
    printf("a1 = %c, a2 = %c\n", a1, a2);

    return 0;
}

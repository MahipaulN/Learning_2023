#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= 1u;
	    return num;
            break;
        case 2:
            num &= ~(1u << 31);  
	    return num;
            break;
        case 3:
            num ^= (1u << 16); 
	    return num;
            break;
        default:
            printf("Invalid operation type\n");
            break;
    }
    return 0;
}

int main() {
    int n, op;
    scanf("%d", &n);
    scanf("%d", &op);

    int result = bit_operations(n,op);
    printf("Result: %d", result);

    return 0;
}

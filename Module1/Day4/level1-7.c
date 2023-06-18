#include <stdio.h>
#include <stdlib.h>

#define max 100

int main() {
    char str[max];
    fgets(str,sizeof(str), stdin);
    int num = atoi(str);
    
    printf("String: %s\n", str);
    printf("Integer: %d\n", num);
    printf("%d",num/5);
    return 0;
}

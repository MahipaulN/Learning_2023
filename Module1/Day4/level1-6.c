#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define max 100

void toggleCase(char *str) {
    while (*str) {
        if (islower(*str)) {
            *str = toupper(*str);
        } else if (isupper(*str)) {
            *str = tolower(*str);
        }
        str++;
    }
}

int main() {
    char str[max];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    printf("Before: %s\n", str);
    toggleCase(str);
    printf("After: %s\n", str);
    
    return 0;
}

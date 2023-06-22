#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#define BUFFER_SIZE 100



void convertToUpperCase(char* str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void convertToLowerCase(char* str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

void convertToSentenceCase(char* str) {
    int capitalize = 1;

    while (*str) {
        if (capitalize && isalpha((unsigned char)*str)) {
            *str = toupper((unsigned char)*str);
            capitalize = 0;
        } else {
            *str = tolower((unsigned char)*str);
        }

        if (*str == '.' || *str == '?' || *str == '!') {
            capitalize = 1;
        }

        str++;
    }
}

int main(int argc, char* argv[]) {
    FILE *sourceFile, *destinationFile;
    char sourcePath[100], destinationPath[100];
    char buffer[BUFFER_SIZE];
    size_t bytesRead;
    int i;

    
    if (argc < 3) {
        printf("Usage: %s [option] <source_file> <destination_file>\n", argv[0]);
        printf("Options:\n");
        printf("  -u\tChange file content to Upper Case\n");
        printf("  -l\tChange file content to Lower Case\n");
        printf("  -s\tChange file content to Sentence Case\n");
        return 1;
    }

    
    char option = argv[1][1]; 

    
    strcpy(sourcePath, argv[2]);

    
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    
    strcpy(destinationPath, argv[3]);

    
    destinationFile = fopen(destinationPath, "w");
    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        if (option == 'u') {
            convertToUpperCase(buffer);
        } else if (option == 'l') {
            convertToLowerCase(buffer);
        } else if (option == 's') {
            convertToSentenceCase(buffer);
        }
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    printf("File copied successfully.\n");

    
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
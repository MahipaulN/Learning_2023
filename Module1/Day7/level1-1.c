#include <stdio.h>

#define BUFFER_SIZE 100

int main() {
    FILE *sourceFile, *destinationFile;
    char sourcePath[100], destinationPath[100];
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    
    printf("Enter the path of the source file: ");
    scanf("%s", sourcePath);

    
    sourceFile = fopen(sourcePath, "rb");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    
    printf("Enter the path of the destination file: ");
    scanf("%s", destinationPath);

    
    destinationFile = fopen(destinationPath, "wb");
    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    printf("File copied successfully.\n");

    
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}

#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char buffer[100];

    printf("Enter some text: ");
    fgets(buffer, sizeof(buffer), stdin);
    inputFile = fopen("C:\\Users\\HP\\Desktop\\c++\\input.txt", "a");
    if (inputFile == NULL) {
        printf("Error creating input.txt\n");
        return 1;
    }
    fputs(buffer, inputFile);
    fclose(inputFile);

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    outputFile = fopen("C:\\Users\\HP\\Desktop\\c++\\output.txt.txt", "a");
    if (outputFile == NULL) {
        printf("Error creating/output.txt\n");
        fclose(inputFile);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), inputFile) != NULL) {
        fputs(buffer, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("File copied successfully.\n");
    return 0;
}
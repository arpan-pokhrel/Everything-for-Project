#include <stdio.h>

int main() {
    FILE *fp;

    // open file in write mode
    fp = fopen("file.txt", "w");

    if (fp == NULL) {
        printf("File not created!");
        return 1;
    }

    fprintf(fp, "Hello World");

    fclose(fp);

    printf("File created and written successfully!");
    return 0;
}

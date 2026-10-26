#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("C:\\Cproramming\\stdunt.txt", "a");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    fprintf(fp, "\nThis is appended text.");

    fclose(fp);

    printf("Data appended successfully.");

    return 0;
}

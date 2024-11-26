#include<stdio.h>

int main() {
    FILE *fone, *ftwo;
    char ch;

    fone = fopen("data.txt", "r");
    if (fone == NULL) {
        printf("Error: Could not open source file.");
        return 1;
    }

    ftwo = fopen("copy.txt", "w");
    if (ftwo == NULL) {
        printf("Error: Could not open destination file.");
        fclose(fone);
        return 1;
    }

    while ((ch = fgetc(fone)) != EOF) {
        fputc(ch, ftwo);
    }

    fclose(fone);
    fclose(ftwo);
}

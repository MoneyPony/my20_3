#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "RUS");
    FILE* inputFile = fopen("winter.txt", "r");
    if (inputFile == NULL) 
    {
        printf("Ошибка открытия файла winter.txt");
        return 1; 
    }
    FILE* outputFile = fopen("winter1.txt", "w");
    if (outputFile == NULL) 
{
        printf("Ошибка открытия файла winter1.txt");
        fclose(inputFile); 
        return 1;
    }
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), inputFile) != NULL) 
    {
        printf("!");
        printf("%s", buffer);
        fprintf(outputFile, "!");
        fprintf(outputFile, "%s", buffer);
    }
    fclose(inputFile);
    fclose(outputFile);
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//заполняет файл случайными квадратными матрицами
void generateFileWithRandomSquareMatrices(const char* filename, int numMatrices, int maxSize) {
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        printf("Ошибка открытия файла\n");
        return;
    }

    srand(time(NULL));

    for (int k = 0; k < numMatrices; k++) {
        int n = rand() % maxSize + 1;

        fprintf(file, "%d\n", n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                fprintf(file, "%d ", rand() % 100);
            }

            fprintf(file, "\n");
        }
    }

    fclose(file);
}

//заполняет файл случайными вещественными числами
void generateFileWithRandomDigits(const char* filename, int numNumbers) {
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        printf("Ошибка открытия файла\n");
        return;
    }

    srand(time(NULL));

    for (int i = 0; i < numNumbers; i++) {
        int precision = rand() % 6 + 1;
        float number = (float)rand() / RAND_MAX * 100;

        fprintf(file, "%.*f\n", precision, number);
    }

    fclose(file);
}

int main() {
    generateFileWithRandomDigits("C:/Users/darya/CLionProjects/Basics-of-programming-labs/libs/files/txt/original_task_2.txt", 25);

    return 0;
}


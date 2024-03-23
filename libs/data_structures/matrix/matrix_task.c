#include <malloc.h>
#include <stdio.h>
#include <stdbool.h>
#include "matrix.c"
#include "matrix.h"
#include <assert.h>

//Задание 1: меняет местами строки, в которых находятся максимальный и минимальный элементы.
void firstTask(matrix *m){
    position min = getMinValuePos(*m);
    position max = getMaxValuePos(*m);

    int minPos = min.rowIndex;
    int maxPos = max.rowIndex;

    swapRows(*m, maxPos, minPos);
}

// функция-критерий для сравнения строк по максимальному элементу
int getMax(int* a, int n) {
    assert(n > 0);

    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

//сортирует строки по неубывнию наибольших элементов строк
void sortRowsByMaxElement(matrix a) {
    int *max = (int*)malloc(sizeof(int) * a.nRows);

    for (int i = 0; i < a.nRows; i++) {
        max[i] = getMax(a.values[i], a.nCols);
    }

    for (int i = 0; i < a.nRows; i++) {
        int minIndex = i;

        for (int j = i + 1; j < a.nRows; j++) {
            if (max[j] < max[minIndex]) {
                minIndex = j;
            }
        }

        if (i != minIndex) {
            swap(&max[i], &max[minIndex]);
            swapRows(a, i, minIndex);
        }
    }

    free(max);
}

//Задание 2: упорядочивает строки матрицы по неубыванию наибольших элементов строк.
void secondTask(matrix m){
    for (int i = 0; i < m.nRows; i++) {
        sortRowsByMaxElement(m);
    }
}

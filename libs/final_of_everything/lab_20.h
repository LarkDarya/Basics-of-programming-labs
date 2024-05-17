#ifndef BASICS_OF_PROGRAMMING_LABS_LAB_20_H
#define BASICS_OF_PROGRAMMING_LABS_LAB_20_H

#include <stdbool.h>
#include "../data_structures/matrix/matrix.h"
#include <stdbool.h>

//заполняет матрицу нулями
void matrixFillingZeros(matrix *m, int row, int col);

//Задание 1: дано n - порядок квадратной матрицы, заполненной нулями, и двумерный целочисленный массив query.
//Необходимо выполнить следующую операцию: query[i] = [row1i, col1i, row2i, col2i]
void firstTask(matrix *m, int countRequests, int *requestsArray[]);

#endif //BASICS_OF_PROGRAMMING_LABS_LAB_20_H

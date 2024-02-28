#ifndef BASICS_OF_PROGRAMMING_LABS_MATRIX_H
#define BASICS_OF_PROGRAMMING_LABS_MATRIX_H

typedef struct matrix {
    int **values; // элементы матрицы
    int nRows; // количество рядов
    int nCols; // количество столбцов
} matrix;

typedef struct position {
    int rowIndex;
    int colIndex;
} position;

#endif //BASICS_OF_PROGRAMMING_LABS_MATRIX_H
